using SWS;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SellerController : MonoBehaviour
{
    public Animator animator;
    public splineMove Spline;
    public MoveAnimator moveAnimator;
    public Collider collider;
    bool StartLook;
    Transform Target;
    public void DisableController(Transform target)
    {
        animator.SetBool("Talk", true);
        Spline.Stop();
        moveAnimator.enabled = false;
        collider.enabled = false;
        Target = target;
        StartLook = true;
        StartCoroutine(OpenPanel());
    }
    IEnumerator OpenPanel()
    {
        yield return new WaitForSeconds(2f);
        UiManager.instance.SellPanel.SetActive(true);
        StartLook = false;
    }

    private void Update()
    {
        if (StartLook)
        {
            transform.LookAt(new Vector3(0, Target.position.y, Target.position.z));
        }
    }
}
