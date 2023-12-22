using UnityEngine;
namespace AR
{
    public class DoorObject : MonoBehaviour
    {
        public DoorState doorState;
        [HideInInspector] public BoxCollider doorCol;

        private void Awake()
        {
            doorCol = GetComponent<BoxCollider>();
        }
        public void IsTrigger()
        {
            doorCol.isTrigger = true;
        }
        public void IsCollider()
        {
            doorCol.isTrigger = false;
        }
    }
}