using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace AR
{
    public class CustomerManager : MonoBehaviour
    {
        public static CustomerManager instance;
        public GameObject[] Destinations;
        [SerializeField]
        private Transform _customerSpawnPos;
        public Transform[] _stoppingDestinantions;
        public StoppingPoint[] _stoppingPoints;
        public Transform _finalPoint;
        [SerializeField]
        private NPC[] _customerPrefab;

        [HideInInspector] public int stoppingIndex;

        public List<NPC> _spawnedCustomers = new();
        public List<GameObject> _customersInQueue = new();
        private List<Destinaton> _UnlockedMachines = new();
        public Destinaton[] _LockedMachines;
        void Awake()
        {
            instance = this;
        }
        public void ReAssignDestinations()
        {
            for (int i = 0; i < _customersInQueue.Count; i++)
            {
                _stoppingPoints[i]._customerToAssign = null;
                var npc = _customersInQueue[i].GetComponent<NPC>();
                npc.myAgent.isStopped = false;
                npc.myAgent.SetDestination(_stoppingDestinantions[i].position);
                npc.GetComponent<Animator>().SetBool("IsIdle", false);
                npc.GetComponent<Animator>().SetBool("IsWalking", true);
                _stoppingPoints[i]._customerToAssign = _customersInQueue[i];
            }
        }
        public void SpawnCustomer()
        {
            MachineUnlock(0);
            MachineUnlock(1);
            MachineUnlock(2);
        }
        #region SpawnCustomers
        public void MachineUnlock(int index)
        {
            if (index < _LockedMachines.Length)
            {
                _UnlockedMachines.Add(_LockedMachines[index]);
                StartCoroutine(SpawnCustomers());
            }
        }
        IEnumerator SpawnCustomers()
        {
            while (MarketManager.instance.isShopOpen)
            {
                int random = Random.Range(0, _UnlockedMachines.Count);
                for (int i = 0; i < _UnlockedMachines.Count; i++)
                {
                    if (_spawnedCustomers.Count < 3)
                        StartCoroutine(BuyItem(_UnlockedMachines[random]));
                }
                yield return new WaitForSeconds(10);
            }
        }
        IEnumerator BuyItem(Destinaton machine)
        {
            if (!machine._isAssigned)
            {
                machine._isAssigned = true;
                yield return new WaitForSeconds(machine.delaySpawn);
                NPC customer = Instantiate(_customerPrefab[Random.Range(0, _customerPrefab.Length)],
                  _customerSpawnPos.transform.position, _customerPrefab[Random.Range(0, _customerPrefab.Length)].transform.rotation);
                _spawnedCustomers.Add(customer);
                customer.BuySodaAndCoffee(machine.reachPoint);
            }
        }
        #endregion
    }
}