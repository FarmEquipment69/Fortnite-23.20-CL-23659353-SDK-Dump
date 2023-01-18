// Class /Script/FortniteGame.FortSupervisedSettingsManager
// Size: 0x1a8
class UFortSupervisedSettingsManager : public UObject
{
	unsigned char unreflected_28[0x178]; // 0x28 (0x178) 
	struct TWeakObjectPtr<class UFortLocalPlayer> OwningPlayer; // 0x1a0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetVoiceChatSettingsLimit (Underlying native function: GetVoiceChatSettingsLimit 0x8cbf57c)
	enum ESocialCommsPermission GetVoiceChatSettingsLimit(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetVoiceChatSettings (Underlying native function: GetVoiceChatSettings 0x8cbf558)
	enum ESocialCommsPermission GetVoiceChatSettings(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetUserGeneratedContentViewable (Underlying native function: GetUserGeneratedContentViewable 0x8cbf4e0)
	struct FString GetUserGeneratedContentViewable(); // (Native | Public | Const)

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetTextChatSettingsLimit (Underlying native function: GetTextChatSettingsLimit 0x8cbf4bc)
	enum ESocialCommsPermission GetTextChatSettingsLimit(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetTextChatSettings (Underlying native function: GetTextChatSettings 0x8cbf498)
	enum ESocialCommsPermission GetTextChatSettings(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetShowSeasonalLevelInFeedLimit (Underlying native function: GetShowSeasonalLevelInFeedLimit 0x8cbf124)
	bool GetShowSeasonalLevelInFeedLimit(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetRequirePinToAddFriend (Underlying native function: GetRequirePinToAddFriend 0x8cbf100)
	bool GetRequirePinToAddFriend(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetPRMMarketingAllowed (Underlying native function: GetPRMMarketingAllowed 0x8cbf020)
	bool GetPRMMarketingAllowed(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetPRMFunctionalAllowed (Underlying native function: GetPRMFunctionalAllowed 0x8cbeffc)
	bool GetPRMFunctionalAllowed(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetPRMExperienceAllowed (Underlying native function: GetPRMExperienceAllowed 0x8cbefd8)
	bool GetPRMExperienceAllowed(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetPlaytimeReportingFrequency (Underlying native function: GetPlaytimeReportingFrequency 0x8cbf08c)
	struct FString GetPlaytimeReportingFrequency(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetPlayerSurveysAllowed (Underlying native function: GetPlayerSurveysAllowed 0x8cbf068)
	bool GetPlayerSurveysAllowed(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetPartyJoinabilityLimit (Underlying native function: GetPartyJoinabilityLimit 0x8cbf044)
	enum EPartyType GetPartyJoinabilityLimit(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetFilterMatureLanguage (Underlying native function: GetFilterMatureLanguage 0x8cbefb4)
	bool GetFilterMatureLanguage(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetCanSeeOtherPlayersNames (Underlying native function: GetCanSeeOtherPlayersNames 0x8cbef90)
	bool GetCanSeeOtherPlayersNames(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortSupervisedSettingsManager.GetCanDisplayMyUserName (Underlying native function: GetCanDisplayMyUserName 0x8cbef6c)
	bool GetCanDisplayMyUserName(); // (Final | Native | Public | Const)
};

