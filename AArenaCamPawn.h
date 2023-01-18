// Class /Script/FortniteGame.ArenaCamPawn
// Size: 0x420
class AArenaCamPawn : public AFortReplaySpectatorPawnBase
{
	struct TArray<class AFortArenaCamera*> ArenaCams; // 0x400 (0x10)
	int CurrArenaCamIdx; // 0x410 (0x4)
	unsigned char padding_414[0xc]; // 0x414 (0xc)
};

