using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectDetect : MonoBehaviour
{
    public string targetTag = "YourTargetTag";
    public LayerMask DetectLayer;
    public float raycastDistance = 5f;
    public GameObject DetectObject;
    UiManager _UiManager;
    private void Start()
    {
        _UiManager = UiManager.instance;
    }
    void Update()
    {
        // Cast a ray from the camera through the mouse position
        Ray ray = Camera.main.ScreenPointToRay(ControlFreak2.CF2Input.mousePosition);
        RaycastHit hit;

        // Check if the ray hits an object within the specified distance
        if (Physics.Raycast(ray, out hit, raycastDistance))
        {
            // Check if the hit object has the desired tag
            if (hit.collider.CompareTag(targetTag))
            {
                Debug.Log("Object with tag '" + targetTag + "' detected!");
                _UiManager.TrashPickUpBtn.SetActive(true);
                DetectObject = hit.collider.gameObject;
                // Draw a gizmo at the hit point

            }
        }
    }

    void OnDrawGizmos()
    {
        // Draw a ray from the camera through the mouse position
        Ray ray = Camera.main.ScreenPointToRay(ControlFreak2.CF2Input.mousePosition);
        Gizmos.color = Color.yellow;
        Gizmos.DrawRay(ray.origin, ray.direction * raycastDistance);
    }
}
