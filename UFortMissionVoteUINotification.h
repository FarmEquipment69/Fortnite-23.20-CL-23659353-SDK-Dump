// Class /Script/FortniteGame.FortMissionVoteUINotification
// Size: 0x110
class UFortMissionVoteUINotification : public UFortUINotification
{
	enum EFortVoteType VoteType; // 0x108 (0x1)
	bool bHasVoteEnded; // 0x109 (0x1)
	unsigned char unreflected_10a[0x2]; // 0x10a (0x2) 
	int VoteResult; // 0x10c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortMissionVoteUINotification.OnActionTaken (Has no native function)
	void OnActionTaken(); // (Event | Public | BlueprintEvent)
};

