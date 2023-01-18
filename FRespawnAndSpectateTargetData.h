// ScriptStruct /Script/FortniteGame.RespawnAndSpectateTargetData
// Size: 0x30
struct FRespawnAndSpectateTargetData
{
	struct TWeakObjectPtr<class AFortAthenaMutator_RespawnAndSpectateSelect> OwningMutator; // 0x0 (0x8)
	unsigned char bEnabled; // 0x8 (0x1)
	unsigned char bPrevAvailableOnClient; // 0x8 (0x1)
	unsigned char bPrevEnabledOnClient; // 0x8 (0x1)
	unsigned char bShouldBeSelectedByDefault; // 0x8 (0x1)
	unsigned char bHiddenAndAutoSelectedFallback; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	float PostDeathDisableTime; // 0xc (0x4)
	int ID; // 0x10 (0x4)
	int DisplayPriority; // 0x14 (0x4)
	unsigned char Team; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	class AActor* RespawnTargetActor; // 0x20 (0x8)
	class AActor* CameraActor; // 0x28 (0x8)
};

