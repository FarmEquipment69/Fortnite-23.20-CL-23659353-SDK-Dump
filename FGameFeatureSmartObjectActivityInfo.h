// ScriptStruct /Script/FortniteGame.GameFeatureSmartObjectActivityInfo
// Size: 0x68
struct FGameFeatureSmartObjectActivityInfo
{
	struct TWeakObjectPtr<class UClass> TargetPawn; // 0x0 (0x28)
	unsigned char bAllowChildOf; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct TArray<struct TWeakObjectPtr<class UClass>> SmartObjectActivitiesToAdd; // 0x30 (0x10)
	struct FScalableFloat Enabled; // 0x40 (0x28)
};

