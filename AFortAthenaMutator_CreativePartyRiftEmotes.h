// Class /Script/FortniteGame.FortAthenaMutator_CreativePartyRiftEmotes
// Size: 0x370
class AFortAthenaMutator_CreativePartyRiftEmotes : public AFortAthenaMutator_PartyRiftEmotes
{
	bool bForceAddEmotes; // 0x368 (0x1)
	unsigned char padding_369[0x7]; // 0x369 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_CreativePartyRiftEmotes.HandlePlayerExitedVolume (Underlying native function: HandlePlayerExitedVolume 0x84a6eac)
	void HandlePlayerExitedVolume(class APlayerState*& PlayerState, class AFortVolume*& Volume); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativePartyRiftEmotes.HandlePlayerEnteredVolume (Underlying native function: HandlePlayerEnteredVolume 0x84a6cf0)
	void HandlePlayerEnteredVolume(class APlayerState*& PlayerState, class AFortVolume*& Volume); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativePartyRiftEmotes.HandleCreativeProfileSet (Underlying native function: HandleCreativeProfileSet 0x71a663c)
	void HandleCreativeProfileSet(class AFortPlayerController*& PlayerController); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaMutator_CreativePartyRiftEmotes.HandleCreativeProfilePermissionsUpdated (Underlying native function: HandleCreativeProfilePermissionsUpdated 0x84a6964)
	void HandleCreativeProfilePermissionsUpdated(class AFortPlayerControllerAthena*& PlayerController); // (Final | Native | Protected)
};

