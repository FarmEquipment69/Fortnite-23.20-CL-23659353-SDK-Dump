// Class /Script/Hotfix.OnlineHotfixManager
// Size: 0x238
class UOnlineHotfixManager : public UObject
{
	unsigned char unreflected_28[0x1d0]; // 0x28 (0x1d0) 
	struct FString OSSName; // 0x1f8 (0x10)
	struct FString HotfixManagerClassName; // 0x208 (0x10)
	struct FString DebugPrefix; // 0x218 (0x10)
	struct TArray<class UObject*> AssetsHotfixedFromIniFiles; // 0x228 (0x10)

	/* Functions */

	// Function /Script/Hotfix.OnlineHotfixManager.StartHotfixProcess (Underlying native function: StartHotfixProcess 0x6e180a8)
	void StartHotfixProcess(); // (Native | Public | BlueprintCallable)
};

