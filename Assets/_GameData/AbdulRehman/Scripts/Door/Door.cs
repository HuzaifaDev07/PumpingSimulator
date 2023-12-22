using UnityEngine;
namespace AR
{
    public class Door : MonoBehaviour
    {
        [SerializeField] DoorObject DoorObject1;
        [SerializeField] DoorObject DoorObject2;
        [SerializeField] EnteringFrom EnteringFrom;
        [SerializeField] Animator door1Anim;
        [SerializeField] Animator door2Anim;
        private void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag("GameController") || other.CompareTag("NPC"))
            {
                if (DoorObject1.doorState == DoorState.Close && DoorObject2.doorState == DoorState.Close)
                {
                    if (EnteringFrom == EnteringFrom.Outside)
                    {
                        DoorObject1.doorState = DoorState.OpenInside;
                        DoorObject2.doorState = DoorState.OpenInside;
                        door1Anim.Play("DoorOpenFromOutsideD1");
                        door2Anim.Play("DoorOpenFromOutsideD2");
                    }
                    else if (EnteringFrom == EnteringFrom.Inside)
                    {
                        DoorObject1.doorState = DoorState.OpenOutSide;
                        DoorObject2.doorState = DoorState.OpenOutSide;
                        door1Anim.Play("DoorOpenFromInsideD1");
                        door2Anim.Play("DoorOpenFromInsideD2");
                    }
                }
                else if (DoorObject1.doorState == DoorState.OpenInside && DoorObject2.doorState == DoorState.OpenInside)
                {
                    if (EnteringFrom == EnteringFrom.CloseFromInside || EnteringFrom == EnteringFrom.CloseFromOutside)
                    {
                        DoorObject1.doorState = DoorState.Close;
                        DoorObject2.doorState = DoorState.Close;
                        door1Anim.Play("DoorCloseFromInsideD1");
                        door2Anim.Play("DoorCloseFromInsideD2");
                    }
                }
                else if (DoorObject1.doorState == DoorState.OpenOutSide && DoorObject2.doorState == DoorState.OpenOutSide)
                {
                    if (EnteringFrom == EnteringFrom.CloseFromInside || EnteringFrom == EnteringFrom.CloseFromOutside)
                    {
                        DoorObject1.doorState = DoorState.Close;
                        DoorObject2.doorState = DoorState.Close;
                        door1Anim.Play("DoorCloseFromOutsideD1");
                        door2Anim.Play("DoorCloseFromOutsideD2");
                    }
                }
            }
        }
    }
}