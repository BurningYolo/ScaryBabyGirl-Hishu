using UnityEngine;
using NaughtyAttributes;

namespace VHS
{    
    public class InputHandler : MonoBehaviour
    {
        #region Data
            [Space,Header("Input Data")]
            [SerializeField] private CameraInputData cameraInputData = null;
            [SerializeField] private MovementInputData movementInputData = null;
            [SerializeField] private InteractionInputData interactionInputData = null;
        #endregion

        #region BuiltIn Methods
            void Start()
            {
                cameraInputData.ResetInput();
                movementInputData.ResetInput();
                interactionInputData.ResetInput();
            }

            void Update()
            {
                GetCameraInput();
                GetMovementInputData();
                GetInteractionInputData();
            }
        #endregion

        #region Custom Methods
            void GetInteractionInputData()
            {
                interactionInputData.InteractedClicked = ControlFreak2.CF2Input.GetKeyDown(KeyCode.E);
                interactionInputData.InteractedReleased = ControlFreak2.CF2Input.GetKeyUp(KeyCode.E);
            }

            void GetCameraInput()
            {
                cameraInputData.InputVectorX = ControlFreak2.CF2Input.GetAxis("Mouse X");
                cameraInputData.InputVectorY = ControlFreak2.CF2Input.GetAxis("Mouse Y");

                cameraInputData.ZoomClicked = ControlFreak2.CF2Input.GetMouseButtonDown(1);
                cameraInputData.ZoomReleased = ControlFreak2.CF2Input.GetMouseButtonUp(1);
            }

            void GetMovementInputData()
            {
                movementInputData.InputVectorX = ControlFreak2.CF2Input.GetAxisRaw("Horizontal");
                movementInputData.InputVectorY = ControlFreak2.CF2Input.GetAxisRaw("Vertical");

                movementInputData.RunClicked = ControlFreak2.CF2Input.GetKeyDown(KeyCode.LeftShift);
                movementInputData.RunReleased = ControlFreak2.CF2Input.GetKeyUp(KeyCode.LeftShift);

                if(movementInputData.RunClicked)
                    movementInputData.IsRunning = true;

                if(movementInputData.RunReleased)
                    movementInputData.IsRunning = false;

                movementInputData.JumpClicked = ControlFreak2.CF2Input.GetKeyDown(KeyCode.Space);
                movementInputData.CrouchClicked = ControlFreak2.CF2Input.GetKeyDown(KeyCode.LeftControl);
            }
        #endregion
    }
}