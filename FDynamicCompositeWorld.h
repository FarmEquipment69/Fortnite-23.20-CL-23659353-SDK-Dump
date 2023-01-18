// ScriptStruct /Script/FortniteGame.DynamicCompositeWorld
// Size: 0x68
struct FDynamicCompositeWorld
{
	struct TWeakObjectPtr<class UWorld> MainCompositeWorld; // 0x0 (0x28)
	struct TArray<struct TWeakObjectPtr<class UWorld>> AdditionalCompositeWorlds; // 0x28 (0x10)
	struct FString CalendarEventName; // 0x38 (0x10)
	struct FName CameraName; // 0x48 (0x4)
	enum EFrontEndCamera CameraOverride; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	float GetDefaultLevelTransitionTime; // 0x50 (0x4)
	bool bStreamInOnDemand; // 0x54 (0x1)
	unsigned char unreflected_55[0x3]; // 0x55 (0x3) 
	struct FGameplayTag StreamingInLevelTag; // 0x58 (0x4)
	struct FGameplayTag StreamingOutLevelTag; // 0x5c (0x4)
	bool bStreamInLevel; // 0x60 (0x1)
	bool bLevelStreamedIn; // 0x61 (0x1)
	unsigned char padding_62[0x6]; // 0x62 (0x6)
};

