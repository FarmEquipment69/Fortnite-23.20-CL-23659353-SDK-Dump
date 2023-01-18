// Class /Script/FortniteGame.FortPoi_DiscoverableComponent
// Size: 0x140
class UFortPoi_DiscoverableComponent : public UActorComponent
{
	struct FVector MapLocationTextLocationOffset; // 0xa0 (0x18)
	struct FText PlayerFacingName; // 0xb8 (0x18)
	struct TWeakObjectPtr<class USoundCue> DiscoveredSoundCue; // 0xd0 (0x28)
	bool bDisableMapLocationText; // 0xf8 (0x1)
	unsigned char unreflected_f9[0x7]; // 0xf9 (0x7) 
	struct TWeakObjectPtr<class UFortQuestItemDefinition> QuestPartOf; // 0x100 (0x28)
	struct FName QuestObjectiveBackendName; // 0x128 (0x4)
	int DiscoverMinimapBitId; // 0x12c (0x4)
	struct TArray<struct FEventDrivenDiscoveryID> EventDrivenBitIds; // 0x130 (0x10)
};

