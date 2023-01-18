// ScriptStruct /Script/GameplayDebugger.GameplayDebuggerExtensionConfig
// Size: 0x28
struct FGameplayDebuggerExtensionConfig
{
	struct FString ExtensionName; // 0x0 (0x10)
	enum EGameplayDebuggerOverrideMode UseExtension; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct TArray<struct FGameplayDebuggerInputConfig> InputHandlers; // 0x18 (0x10)
};

