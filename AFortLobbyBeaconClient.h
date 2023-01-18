// Class /Script/FortniteGame.FortLobbyBeaconClient
// Size: 0x3a0
class AFortLobbyBeaconClient : public ALobbyBeaconClient
{

	/* Functions */

	// Function /Script/FortniteGame.FortLobbyBeaconClient.ServerToggleIsLobbyTimerPaused (Underlying native function: ServerToggleIsLobbyTimerPaused 0x8be61f0)
	void ServerToggleIsLobbyTimerPaused(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortLobbyBeaconClient.ServerTeamChatRoomReady (Underlying native function: ServerTeamChatRoomReady 0x8be6074)
	void ServerTeamChatRoomReady(struct FString& ChatRoomId); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortLobbyBeaconClient.ServerSetMatchmakingLevel (Underlying native function: ServerSetMatchmakingLevel 0x8be5f40)
	void ServerSetMatchmakingLevel(struct FUniqueNetIdRepl& InUniqueId, int& MatchmakingLevel); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortLobbyBeaconClient.ServerSetHeroType (Underlying native function: ServerSetHeroType 0x8be5e0c)
	void ServerSetHeroType(struct FUniqueNetIdRepl& InUniqueId, class UFortHeroType*& InHeroType); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortLobbyBeaconClient.ServerSetHeroId (Underlying native function: ServerSetHeroId 0x8be5c14)
	void ServerSetHeroId(struct FUniqueNetIdRepl& InUniqueId, struct FString& InHeroId); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortLobbyBeaconClient.ServerSetGadget (Underlying native function: ServerSetGadget 0x8be59d8)
	void ServerSetGadget(struct FUniqueNetIdRepl& InUniqueId, int& Index, struct FString& GadgetPersistentName); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortLobbyBeaconClient.ServerSetCurrentCharacterXp (Underlying native function: ServerSetCurrentCharacterXp 0x8be58a4)
	void ServerSetCurrentCharacterXp(struct FUniqueNetIdRepl& InUniqueId, int& CurrentCharacterXp); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortLobbyBeaconClient.ServerSetCosmeticLoadout (Underlying native function: ServerSetCosmeticLoadout 0x8be5740)
	void ServerSetCosmeticLoadout(struct FUniqueNetIdRepl& InUniqueId, struct FFortAthenaLoadout& InLoadout); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortLobbyBeaconClient.ServerSetConsoleUniqueNetId (Underlying native function: ServerSetConsoleUniqueNetId 0x8be55e4)
	void ServerSetConsoleUniqueNetId(struct FUniqueNetIdRepl& InUniqueId, struct FUniqueNetIdRepl& NewConsoleNetId); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortLobbyBeaconClient.ServerSetCharacterGender (Underlying native function: ServerSetCharacterGender 0x8be54b0)
	void ServerSetCharacterGender(struct FUniqueNetIdRepl& InUniqueId, struct TEnumAsByte<EFortCustomGender>& GenderType); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortLobbyBeaconClient.ServerIncrementHomeBaseVersion (Underlying native function: ServerIncrementHomeBaseVersion 0x8be53c4)
	void ServerIncrementHomeBaseVersion(struct FUniqueNetIdRepl& InUniqueId); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortLobbyBeaconClient.ClientCreateOrJoinChatRoom (Underlying native function: ClientCreateOrJoinChatRoom 0x8be50a4)
	void ClientCreateOrJoinChatRoom(struct FString& ChatRoomId); // (Net | NetReliable | Native | Event | Public | NetClient)
};

