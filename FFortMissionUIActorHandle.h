// ScriptStruct /Script/FortniteGame.FortMissionUIActorHandle
// Size: 0x40
struct FFortMissionUIActorHandle
{
	struct TWeakObjectPtr<class AActor> AttachedActor; // 0x0 (0x8)
	struct FVector AttachmentOffset; // 0x8 (0x18)
	float MaxVisibleDistance; // 0x20 (0x4)
	struct FGuid MissionGuid; // 0x24 (0x10)
	struct TWeakObjectPtr<class UFortMissionInfoIndicator> MissionUIIndicator; // 0x34 (0x8)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

