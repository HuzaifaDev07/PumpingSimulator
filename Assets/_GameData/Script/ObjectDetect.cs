using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectDetect : MonoBehaviour
{
    [SerializeField] PlayerManager playerManager;
    public string Trash = "Trash";
    public string Dustbin = "Dustbin";
    public string PumpTag = "Pumphandle";
    public string Car = "Car";
    public LayerMask DetectLayer;
    public float raycastDistance = 5f;
    public GameObject DetectObject;
    public GameObject CarDetectRef;
    UiManager _UiManager;


    private void Start()
    {
        _UiManager = UiManager.instance;
    }
    void Update()
    {
        // Cast a ray from the camera through the mouse position
        Ray ray = new Ray(Camera.main.transform.position, Camera.main.transform.forward);
        RaycastHit hit;

        // Check if the ray hits an object within the specified distance
        if (Physics.Raycast(ray, out hit, raycastDistance))
        {
            // Check if the hit object has the desired tag
            if (hit.collider.CompareTag(Trash) && !playerManager.handFilled)
            {
                Debug.Log("Object with tag '" + Trash + "' detected!");
                _UiManager.TrashPickUpBtn.SetActive(true);
                DetectObject = hit.collider.gameObject;
                // Draw a gizmo at the hit point
            }
            else
            {
                _UiManager.TrashPickUpBtn.SetActive(false);
            }

            if (hit.collider.CompareTag(Dustbin) && playerManager.handFilled)
            {
                Debug.Log("Object with tag '" + Trash + "' detected!");
                _UiManager.DropTrashBtn.SetActive(true);
            }
            else
            {
                _UiManager.DropTrashBtn.SetActive(false);
            }

            if (hit.collider.CompareTag(PumpTag) && PrefData.GetTask() > 2 && !GameManager.Instance.PumpPick)
            {
                Debug.Log("Object with tag '" + hit.collider.gameObject.name + "' detected!");
                DetectObject = hit.collider.gameObject;
                _UiManager.PumpHoldBtn.SetActive(true);
            }
            else
            {
                _UiManager.PumpHoldBtn.SetActive(false);
            }

            if (hit.collider.CompareTag(Car) && PrefData.GetTask() > 2 && GameManager.Instance.PumpPick)
            {
                Debug.Log("Object with tag '" + hit.collider.gameObject.name + "' detected!");
                CarDetectRef = hit.collider.gameObject;
                _UiManager.putPumpinCar.SetActive(true);

            }
            else
            {
                _UiManager.putPumpinCar.SetActive(false);
            }
        }
    }
    void OnDrawGizmos()
    {
        // Draw a ray from the camera through the mouse position
        Ray ray = new Ray(Camera.main.transform.position, Camera.main.transform.forward);
        Gizmos.color = Color.yellow;
        Gizmos.DrawRay(ray.origin, ray.direction * raycastDistance);
    }
}
