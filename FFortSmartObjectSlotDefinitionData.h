// ScriptStruct /Script/FortniteAI.FortSmartObjectSlotDefinitionData
// Size: 0x20
struct FFortSmartObjectSlotDefinitionData : FSmartObjectSlotDefinitionData
{
	float CooldownOnFinished; // 0x8 (0x4)
	float CooldownOnInterrupted; // 0xc (0x4)
	float Radius; // 0x10 (0x4)
	float SlotCooldownOnFinished; // 0x14 (0x4)
	float SlotCooldownOnInterrupted; // 0x18 (0x4)
	enum EFortAthenaSmartObjectPriority Priority; // 0x1c (0x1)
	unsigned char padding_1d[0x3]; // 0x1d (0x3)
};

