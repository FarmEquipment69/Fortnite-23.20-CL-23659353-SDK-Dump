// Class /Script/FortniteGame.ContentBeaconClientV2
// Size: 0x620
class AContentBeaconClientV2 : public AOnlineBeaconClient
{
	struct FContentMessageArrayV2 ContentMessagesArray; // 0x318 (0x130)
	unsigned char unreflected_448[0x100]; // 0x448 (0x100) 
	struct FString DestSessionId; // 0x548 (0x10)
	struct FString DestConnectionInfoString; // 0x558 (0x10)
	unsigned char unreflected_568[0x1]; // 0x568 (0x1) 
	bool bIsClientInSync; // 0x569 (0x1)
	unsigned char unreflected_56a[0x6]; // 0x56a (0x6) 
	struct TArray<struct FContentBeaconClientReplicatedModule> ClientContentModules; // 0x570 (0x10)
	unsigned char padding_580[0xa0]; // 0x580 (0xa0)

	/* Functions */

	// Function /Script/FortniteGame.ContentBeaconClientV2.ServerRegisterClient (Underlying native function: ServerRegisterClient 0x8b9d5a4)
	void ServerRegisterClient(struct FString& ClientConsumerFilterPlatform, struct FString& InCompatibilityBranchVersion, bool& bInIsAllowedToLoad); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.ContentBeaconClientV2.ServerOnLocalModuleStateChanged (Underlying native function: ServerOnLocalModuleStateChanged 0x8b9d480)
	void ServerOnLocalModuleStateChanged(struct FClientModuleId& ModuleId, enum EContentRequestInstallState& CurrentState); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.ContentBeaconClientV2.ServerOnLocalModuleError (Underlying native function: ServerOnLocalModuleError 0x8b9d2fc)
	void ServerOnLocalModuleError(struct FClientModuleId& ModuleId, struct FContentBeaconError& Error, bool& bFatal); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.ContentBeaconClientV2.ServerOnClientError (Underlying native function: ServerOnClientError 0x8b9d1f8)
	void ServerOnClientError(struct FContentBeaconError& Error, bool& bClientDisconnecting); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.ContentBeaconClientV2.ServerFinishDisconnect (Underlying native function: ServerFinishDisconnect 0x8b9d1ac)
	void ServerFinishDisconnect(); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.ContentBeaconClientV2.ServerBeginDisconnect (Underlying native function: ServerBeginDisconnect 0x6e13634)
	void ServerBeginDisconnect(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.ContentBeaconClientV2.OnRep_ClientAdditionalContentBundles (Underlying native function: OnRep_ClientAdditionalContentBundles 0x8b9d01c)
	void OnRepClientAdditionalContentBundles(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.ContentBeaconClientV2.OnClientReadinessChanged (Underlying native function: OnClientReadinessChanged 0x8b9d008)
	void OnClientReadinessChanged(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.ContentBeaconClientV2.ClientSetClientReadiness (Underlying native function: ClientSetClientReadiness 0x6dd1bf8)
	void ClientSetClientReadiness(enum EClientContentReadinessV2& InClientReadiness); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.ContentBeaconClientV2.ClientOnRegistrationComplete (Underlying native function: ClientOnRegistrationComplete 0x8b9cef8)
	void ClientOnRegistrationComplete(bool& bInShouldErrorOnAdditionalContentFailure, bool& bInHostRequiresAdditionalContent, bool& bInNeedsDownloadBeforeJoin); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.ContentBeaconClientV2.ClientOnHostError (Underlying native function: ClientOnHostError 0x8b9cda8)
	void ClientOnHostError(struct FContentBeaconError& Error, bool& bClientDisconnect, bool& bServerShutdown); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.ContentBeaconClientV2.ClientNotifyOfServerScriptScreenLogMessage (Underlying native function: ClientNotifyOfServerScriptScreenLogMessage 0x8b9cd00)
	void ClientNotifyOfServerScriptScreenLogMessage(struct FScriptScreenLogMessage& message); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.ContentBeaconClientV2.ClientNotifyOfServerScriptDiagnosticMessage (Underlying native function: ClientNotifyOfServerScriptDiagnosticMessage 0x8b9cc64)
	void ClientNotifyOfServerScriptDiagnosticMessage(struct FScriptDiagnosticMessage& message); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.ContentBeaconClientV2.ClientNotifyDisconnect (Underlying native function: ClientNotifyDisconnect 0x8b9cbe0)
	void ClientNotifyDisconnect(bool& bCleanupContent); // (Net | NetReliable | Native | Event | Public | NetClient)
};

