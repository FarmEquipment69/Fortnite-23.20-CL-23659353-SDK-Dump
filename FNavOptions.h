// ScriptStruct /Script/FortniteGame.NavOptions
// Size: 0x38
struct FNavOptions
{
	struct FGameplayTag CameraTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class AFortEventLevelNavigationActor* NavObjToLeft; // 0x8 (0x8)
	class AFortEventLevelNavigationActor* NavObjToRight; // 0x10 (0x8)
	class AFortEventLevelNavigationActor* NavObjToUp; // 0x18 (0x8)
	class AFortEventLevelNavigationActor* NavObjToDown; // 0x20 (0x8)
	struct TArray<struct FNavOptionFallback> NavFallbacks; // 0x28 (0x10)
};

