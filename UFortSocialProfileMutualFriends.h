// Class /Script/FortniteUI.FortSocialProfileMutualFriends
// Size: 0x310
class UFortSocialProfileMutualFriends : public UFortSocialProfileSubPanel
{
	int MaxNumberOfDisplayedMutualFriends; // 0x2e0 (0x4)
	unsigned char unreflected_2e4[0x4]; // 0x2e4 (0x4) 
	class UDynamicEntryBox* EntryBoxMutualFriends; // 0x2e8 (0x8)
	class UWidget* SizeBoxRoot; // 0x2f0 (0x8)
	struct TArray<class USocialUser*> MutualFriendSocialUsers; // 0x2f8 (0x10)
	unsigned char padding_308[0x8]; // 0x308 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSocialProfileMutualFriends.HandleOnQueryMutualFriendsComplete (Underlying native function: HandleOnQueryMutualFriendsComplete 0xa7758fc)
	void HandleOnQueryMutualFriendsComplete(struct TArray<struct FUniqueNetIdRepl>& MutualFriendIds); // (Final | Native | Protected)
};

