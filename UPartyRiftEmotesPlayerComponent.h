// Class /Script/FortniteGame.PartyRiftEmotesPlayerComponent
// Size: 0xc8
class UPartyRiftEmotesPlayerComponent : public UFortControllerComponent
{
	class AFortAthenaMutator_PartyRiftEmotes* MutatorPartyRiftEmotes; // 0xa0 (0x8)
	float LongRangeInteractionTimer; // 0xa8 (0x4)
	bool bIsOwnerPartyLeader; // 0xac (0x1)
	unsigned char padding_ad[0x1b]; // 0xad (0x1b)

	/* Functions */

	// Function /Script/FortniteGame.PartyRiftEmotesPlayerComponent.Server_SetRequestToJoinPrivateIntention (Underlying native function: Server_SetRequestToJoinPrivateIntention 0x8524cc8)
	void ServerSetRequestToJoinPrivateIntention(bool& bNewIntention); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.PartyRiftEmotesPlayerComponent.Server_SetPartyPrivacy (Underlying native function: Server_SetPartyPrivacy 0x8287900)
	void ServerSetPartyPrivacy(enum EPartyType& NewPartyPrivacy); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.PartyRiftEmotesPlayerComponent.Server_SetPartyFull (Underlying native function: Server_SetPartyFull 0x73f3f74)
	void ServerSetPartyFull(bool& bNewValue); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.PartyRiftEmotesPlayerComponent.Server_SetOwnerAway (Underlying native function: Server_SetOwnerAway 0x8524c44)
	void ServerSetOwnerAway(bool& bNewValue); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.PartyRiftEmotesPlayerComponent.Server_SetOwnerAsPartyLeader (Underlying native function: Server_SetOwnerAsPartyLeader 0x8524b94)
	void ServerSetOwnerAsPartyLeader(bool& bPartyLeader); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.PartyRiftEmotesPlayerComponent.OnRep_MutatorPartyRiftEmotes (Underlying native function: OnRep_MutatorPartyRiftEmotes 0x852465c)
	void OnRepMutatorPartyRiftEmotes(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.PartyRiftEmotesPlayerComponent.HandlePrivacySettingsChanged (Underlying native function: HandlePrivacySettingsChanged 0x8523e98)
	void HandlePrivacySettingsChanged(struct FPartyPrivacySettings& NewPrivacySettings); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.PartyRiftEmotesPlayerComponent.ClientSendSpawnAnalytics (Underlying native function: ClientSendSpawnAnalytics 0x8522ca0)
	void ClientSendSpawnAnalytics(struct FVector& Location, int& DeploymentTime, struct FString& Reason); // (Net | NetReliable | Native | Event | Public | HasDefaults | NetClient | Const)
};

