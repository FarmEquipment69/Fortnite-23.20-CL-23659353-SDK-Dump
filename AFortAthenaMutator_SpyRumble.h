// Class /Script/FortniteGame.FortAthenaMutator_SpyRumble
// Size: 0x8a8
class AFortAthenaMutator_SpyRumble : public AFortAthenaMutator_TDM
{
	unsigned char unreflected_748[0x28]; // 0x748 (0x28) 
	struct FScalableFloat NumKillsForPerkUnlock; // 0x770 (0x28)
	struct FScalableFloat ScoreToAddOnSupplyDropCollect; // 0x798 (0x28)
	struct FGameplayTag SupplyDropAccoladeTag; // 0x7c0 (0x4)
	unsigned char unreflected_7c4[0x4]; // 0x7c4 (0x4) 
	struct FText RoundResultsTextWin; // 0x7c8 (0x18)
	struct FText RoundResultsTextLost; // 0x7e0 (0x18)
	unsigned char unreflected_7f8[0x4]; // 0x7f8 (0x4) 
	int NumKillsForNextPerkUnlock; // 0x7fc (0x4)
	int KillCountCutOff; // 0x800 (0x4)
	unsigned char unreflected_804[0x4]; // 0x804 (0x4) 
	struct FAthenaGameMessageData GameMsgSupplyDropOpenedFriendly; // 0x808 (0x50)
	struct FAthenaGameMessageData GameMsgSupplyDropOpenedEnemy; // 0x858 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_SpyRumble.OnRep_NumKillsForNextPerkUnlock (Underlying native function: OnRep_NumKillsForNextPerkUnlock 0x8505dc8)
	void OnRepNumKillsForNextPerkUnlock(); // (Final | Native | Private)
};

