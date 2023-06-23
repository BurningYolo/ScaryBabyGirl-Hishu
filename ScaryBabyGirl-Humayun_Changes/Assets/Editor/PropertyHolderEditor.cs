using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(InteractionAble)), CanEditMultipleObjects]
public class PropertyHolderEditor : Editor
{

    public SerializedProperty
        objectTpye,
        isOpen_Prop,
        isLightOn_Prop,
        anim_Prop,
        unlocked_Prob,
        doorText;
       

    void OnEnable()
    {
        // Setup the SerializedProperties
        objectTpye = serializedObject.FindProperty("objectTpye");
        isOpen_Prop = serializedObject.FindProperty("isOpen");
        isLightOn_Prop = serializedObject.FindProperty("isLightOn");
        anim_Prop = serializedObject.FindProperty("anim");
        unlocked_Prob = serializedObject.FindProperty("unlocked");
        doorText = serializedObject.FindProperty("doorText");
        
    }

    public override void OnInspectorGUI()
    {
        serializedObject.Update();

        EditorGUILayout.PropertyField(objectTpye);
       
     

        InteractionAble.Choices choices = (InteractionAble.Choices)objectTpye.enumValueIndex;

        switch (choices)
        {
            case InteractionAble.Choices.Door:
                EditorGUILayout.PropertyField(isOpen_Prop);
                EditorGUILayout.PropertyField(unlocked_Prob);
                EditorGUILayout.PropertyField(anim_Prop);
                EditorGUILayout.PropertyField(doorText);
                break;

            case InteractionAble.Choices.Light:
                EditorGUILayout.PropertyField(isLightOn_Prop);
                break;

        }


        serializedObject.ApplyModifiedProperties();
    }
}