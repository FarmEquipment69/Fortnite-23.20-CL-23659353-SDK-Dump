// Class /Script/AIModule.BTTask_MoveDirectlyToward
// Size: 0xb8
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
	unsigned char bDisablePathUpdateOnGoalLocationChange; // 0xb0 (0x1)
	unsigned char bProjectVectorGoalToNavigation; // 0xb0 (0x1)
	unsigned char bUpdatedDeprecatedProperties; // 0xb0 (0x1)
	unsigned char padding_b1[0x7]; // 0xb1 (0x7)
};

