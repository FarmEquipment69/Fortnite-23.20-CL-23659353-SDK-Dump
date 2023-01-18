// Class /Script/FortniteGame.FortSpectateAFriendController
// Size: 0x3c50
class AFortSpectateAFriendController : public AFortLiveSpectatorController
{
	class AFortPlayerStateAthena* PlayerJoinedOn; // 0x3b38 (0x8)
	bool HasValidTarget; // 0x3b40 (0x1)
	unsigned char TeamToFollow; // 0x3b41 (0x1)
	bool FollowAnyTeam; // 0x3b42 (0x1)
	unsigned char unreflected_3b43[0x1]; // 0x3b43 (0x1) 
	int TeamJoinedOnPlacement; // 0x3b44 (0x4)
	class AFortTeamInfo* TeamJoinedOn; // 0x3b48 (0x8)
	unsigned char unreflected_3b50[0x30]; // 0x3b50 (0x30) 
	struct FVector DefaultCameraLocation; // 0x3b80 (0x18)
	bool FollowAnyTeamAfterFirst; // 0x3b98 (0x1)
	unsigned char unreflected_3b99[0x3]; // 0x3b99 (0x3) 
	float StartingDiconnectTimerLength; // 0x3b9c (0x4)
	float InvalidTargetDiconnectTimerLength; // 0x3ba0 (0x4)
	unsigned char padding_3ba4[0xac]; // 0x3ba4 (0xac)

	/* Functions */

	// Function /Script/FortniteGame.FortSpectateAFriendController.OnRep_TeamToFollow (Underlying native function: OnRep_TeamToFollow 0x8ddec10)
	void OnRepTeamToFollow(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortSpectateAFriendController.OnRep_TeamJoinedOnPlacement (Underlying native function: OnRep_TeamJoinedOnPlacement 0x8ddee30)
	void OnRepTeamJoinedOnPlacement(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortSpectateAFriendController.OnRep_PlayerJoinedOn (Underlying native function: OnRep_PlayerJoinedOn 0x8dded70)
	void OnRepPlayerJoinedOn(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortSpectateAFriendController.OnRep_HasValidTarget (Underlying native function: OnRep_HasValidTarget 0x8ddec48)
	void OnRepHasValidTarget(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortSpectateAFriendController.OnRep_FollowAnyTeam (Underlying native function: OnRep_FollowAnyTeam 0x8ddec10)
	void OnRepFollowAnyTeam(); // (Final | Native | Private)
};

