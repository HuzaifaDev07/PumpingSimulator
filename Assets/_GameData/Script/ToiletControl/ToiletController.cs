using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToiletController : MonoBehaviour
{
    public GameObject[] objectsToSpawn;  // Array of objects to spawn
    public float minSpawnInterval = 1f;  // Minimum time between spawns
    public float maxSpawnInterval = 10f; // Maximum time between spawns

    private void Start()
    {
        ES3AutoSaveMgr.Current.Save();
        // Start the spawning process
        SpawnRandomObject();
    }

    private void SpawnRandomObject()
    {
        // Generate a random time interval between spawns
        float randomTime = Random.Range(minSpawnInterval, maxSpawnInterval);

        // Invoke the SpawnObject function after the random time interval
        Invoke("SpawnObject", randomTime);
    }

    private void SpawnObject()
    {
        // Choose a random object from the array
        GameObject objectToSpawn = objectsToSpawn[Random.Range(0, objectsToSpawn.Length)];

        // Instantiate the chosen object at the spawner's position
        objectToSpawn.SetActive(true);

        // Start the spawning process again
        SpawnRandomObject();
    }
}
