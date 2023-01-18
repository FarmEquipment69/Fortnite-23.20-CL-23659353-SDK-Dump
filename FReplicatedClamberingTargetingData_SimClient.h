// ScriptStruct /Script/ClamberingCodeRuntime.ReplicatedClamberingTargetingData_SimClient
// Size: 0x38
struct FReplicatedClamberingTargetingData_SimClient
{
	enum EClamberingType Type; // 0x0 (0x1)
	unsigned char unreflected_1[0x1]; // 0x1 (0x1) 
	uint16_t WallNormalYawQuantized; // 0x2 (0x2)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector_NetQuantize100 TargetLocation; // 0x8 (0x18)
	class AActor* TargetActor; // 0x20 (0x8)
	class UActorComponent* TargetActorComponent; // 0x28 (0x8)
	struct FName TargetActorBoneName; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

