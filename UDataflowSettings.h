// Class /Script/DataflowCore.DataflowSettings
// Size: 0xc8
class UDataflowSettings : public UDeveloperSettings
{
	struct FLinearColor ArrayPinTypeColor; // 0x30 (0x10)
	struct FLinearColor ManagedArrayCollectionPinTypeColor; // 0x40 (0x10)
	struct FLinearColor BoxPinTypeColor; // 0x50 (0x10)
	struct TMap<struct FName, struct FNodeColors> NodeColorsMap; // 0x60 (0x50)
	unsigned char padding_b0[0x18]; // 0xb0 (0x18)
};

