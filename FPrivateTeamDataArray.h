// ScriptStruct /Script/FortniteGame.PrivateTeamDataArray
// Size: 0x180
struct FPrivateTeamDataArray : FFastArraySerializer
{
	struct TArray<struct FPrivateTeamDataItem> Items; // 0x108 (0x10)
	unsigned char padding_118[0x68]; // 0x118 (0x68)
};

