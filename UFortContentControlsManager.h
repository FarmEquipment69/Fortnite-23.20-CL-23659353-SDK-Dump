// Class /Script/FortniteGame.FortContentControlsManager
// Size: 0x378
class UFortContentControlsManager : public UFortSupervisedSettingsManager
{
	unsigned char unreflected_378[0x378]; 

	/* Functions */

	// Function /Script/FortniteGame.FortContentControlsManager.SetVoiceChatSettings (Underlying native function: SetVoiceChatSettings 0x8bc2d00)
	void SetVoiceChatSettings(enum ESocialCommsPermission& InValue); // (Final | 0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetUserGeneratedContentViewable (Underlying native function: SetUserGeneratedContentViewable 0x8bc2bac)
	void SetUserGeneratedContentViewable(struct FString& InValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetRequirePinToAddFriend (Underlying native function: SetRequirePinToAddFriend 0x8bc2b2c)
	void SetRequirePinToAddFriend(bool& bInValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetPlaytimeReportingFrequency (Underlying native function: SetPlaytimeReportingFrequency 0x8bc2990)
	void SetPlaytimeReportingFrequency(struct FString& InValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetCanUseTextChat (Underlying native function: SetCanUseTextChat 0x8bc2910)
	void SetCanUseTextChat(bool& bInValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetCanSeeOtherPlayersNames (Underlying native function: SetCanSeeOtherPlayersNames 0x87b7020)
	void SetCanSeeOtherPlayersNames(bool& bInValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetCanSeeMatureLanguage (Underlying native function: SetCanSeeMatureLanguage 0x8bc2890)
	void SetCanSeeMatureLanguage(bool& bInValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetCanDisplayMyUserName (Underlying native function: SetCanDisplayMyUserName 0x8bc2810)
	void SetCanDisplayMyUserName(bool& bInValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.SetCanAcceptFriendRequest (Underlying native function: SetCanAcceptFriendRequest 0x8bc2790)
	void SetCanAcceptFriendRequest(bool& bInValue); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortContentControlsManager.GetCanUseTextChat (Underlying native function: GetCanUseTextChat 0x8bc2530)
	bool GetCanUseTextChat(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortContentControlsManager.GetCanSeeMatureLanguage (Underlying native function: GetCanSeeMatureLanguage 0x8bc2518)
	bool GetCanSeeMatureLanguage(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortContentControlsManager.GetCanAcceptFriendRequest (Underlying native function: GetCanAcceptFriendRequest 0x8bc2500)
	bool GetCanAcceptFriendRequest(); // (Final | Native | Public | Const)
};

