// Class /Script/EnhancedInput.InputModifierDeadZone
// Size: 0x38
class UInputModifierDeadZone : public UInputModifier
{
	float LowerThreshold; // 0x28 (0x4)
	float UpperThreshold; // 0x2c (0x4)
	enum EDeadZoneType Type; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

