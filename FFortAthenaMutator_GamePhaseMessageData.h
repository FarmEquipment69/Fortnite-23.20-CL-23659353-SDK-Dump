// ScriptStruct /Script/FortniteGame.FortAthenaMutator_GamePhaseMessageData
// Size: 0x20
struct FFortAthenaMutator_GamePhaseMessageData
{
	bool bSendIfPhaseSkipped; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct FAthenaGameMessageData> Messages; // 0x8 (0x10)
	unsigned char padding_18[0x8]; // 0x18 (0x8)
};

