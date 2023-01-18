// Class /Script/FortniteAI.FortAthenaBTService_Clamber
// Size: 0xa0
class UFortAthenaBTService_Clamber : public UBTService
{
	struct FName ClamberExecutionStatusName; // 0x70 (0x4)
	struct FName ClamberOriginLocationName; // 0x74 (0x4)
	struct FName ClamberDestinationLocationName; // 0x78 (0x4)
	struct FName ClamberAbilityStatusName; // 0x7c (0x4)
	struct FName JumpExecutionStatusName; // 0x80 (0x4)
	struct FName CrouchExecutionStatusName; // 0x84 (0x4)
	unsigned char unreflected_88[0xc]; // 0x88 (0xc) 
	uint32_t FirstJumpRetryMaxCount; // 0x94 (0x4)
	float FirstJumpRetryDelay; // 0x98 (0x4)
	float FirstJumpClamberMaxStartDelay; // 0x9c (0x4)
};

