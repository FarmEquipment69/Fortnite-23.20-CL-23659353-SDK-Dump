// Class /Script/FortniteUI.AthenaChallengeImageGridEntry
// Size: 0x1480
class UAthenaChallengeImageGridEntry : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x18]; // 0x1430 (0x18) 
	class UCommonLazyImage* ImageBrush; // 0x1448 (0x8)
	bool bSelected; // 0x1450 (0x1)
	unsigned char unreflected_1451[0x3]; // 0x1451 (0x3) 
	int GridLocation; // 0x1454 (0x4)
	int Column; // 0x1458 (0x4)
	int Row; // 0x145c (0x4)
	unsigned char padding_1460[0x20]; // 0x1460 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengeImageGridEntry.TransitionFromOwnedToCompletedState (Has no native function)
	void TransitionFromOwnedToCompletedState(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeImageGridEntry.TransitionFromLockedToOwnedState (Has no native function)
	void TransitionFromLockedToOwnedState(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeImageGridEntry.SetupLockedToOwnState (Has no native function)
	void SetupLockedToOwnState(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeImageGridEntry.OnChallengeSet (Has no native function)
	void OnChallengeSet(bool& bIsComplete, bool& bIsLocked); // (Event | Public | BlueprintEvent)
};

