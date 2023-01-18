// ScriptStruct /Script/FortniteGame.FortItemEntryStateValue
// Size: 0xc
struct FFortItemEntryStateValue
{
	int IntValue; // 0x0 (0x4)
	struct FName NameValue; // 0x4 (0x4)
	struct TEnumAsByte<EFortItemEntryState> StateType; // 0x8 (0x1)
	unsigned char padding_9[0x3]; // 0x9 (0x3)
};

