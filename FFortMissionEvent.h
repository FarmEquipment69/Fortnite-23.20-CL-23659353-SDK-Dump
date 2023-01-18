// ScriptStruct /Script/FortniteGame.FortMissionEvent
// Size: 0x98
struct FFortMissionEvent
{
	struct FName EventType; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FGameplayTagContainer ObjectiveHandle; // 0x8 (0x20)
	class UObject* EventFocus; // 0x28 (0x8)
	class UDataAsset* EventContent; // 0x30 (0x8)
	class AActor* EventInstigator; // 0x38 (0x8)
	int GenericInt; // 0x40 (0x4)
	float GenericFloat; // 0x44 (0x4)
	struct FText GenericText; // 0x48 (0x18)
	struct FGameplayTagContainer GameplayTags; // 0x60 (0x20)
	struct FGuid MissionGuid; // 0x80 (0x10)
	class UFortMissionEventParams* Params; // 0x90 (0x8)
};

