struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 60 classes
	//0. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//6. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//7. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//8. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//9. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//10. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//11. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//12. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//13. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//14. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//15. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//16. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//17. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//18. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//19. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//20. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//21. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//22. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//23. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//24. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//25. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//26. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//27. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//28. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//29. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//30. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//31. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//32. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//33. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//34. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//35. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//36. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//37. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//38. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//39. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//40. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//41. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//42. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//43. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//44. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//45. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//46. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//47. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//48. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//49. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//50. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//51. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//52. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//53. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//54. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//55. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//56. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//57. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//58. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//59. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
