using System;
using System.IO;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.AI;

#if UNITY_EDITOR
using UnityEditor;
using UnityEditorInternal;
#endif

using Object = UnityEngine.Object;
using Random = UnityEngine.Random;

namespace Moe.Tools
{
	public static class BasicCursor
	{
		public static bool Active
        {
            set
            {
                if (value)
                    Activate();
                else
                    Disable();
            }
        }

        public static void Activate()
        {
            ControlFreak2.CFCursor.visible = true;
            ControlFreak2.CFCursor.lockState = CursorLockMode.None;
        }
        public static void Disable()
        {
            ControlFreak2.CFCursor.visible = false;
            ControlFreak2.CFCursor.lockState = CursorLockMode.Locked;
        }
	}
}