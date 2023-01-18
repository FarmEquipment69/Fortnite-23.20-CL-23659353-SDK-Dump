// Enum /Script/FortniteGame.EPlaylistUpdateReason
enum class EPlaylistUpdateReason : uint8_t
{
  LocalPlayerJoinedParty = 0,
  LocalPlayerLocationChangedToFrontend = 1,
  LocalPlayerSubgameSelected = 2,
  LocalPlayerLeftParty = 3,
  LocalPlayerDeclinedCrossplayPermission = 4,
  PartyGameSessionKeyChanged = 5,
  PartySquadFillChanged = 6,
  PartyMemberJoined = 7,
  PartyMemberLeft = 8,
  PartyMemberReadinessChanged = 9,
  PartyMemberInGameReadyCheckChanged = 10,
  PartyMemberLocationChanged = 11,
  PartyMemberSpectateAvailabilityChanged = 12,
  PartyMemberSessionJoinInfoChanged = 13,
  ValidatePlaylist_QoSCheckFailed = 14,
  ValidatePlaylist_TournamentEventOver = 15,
  ValidatePlaylist_BlackoutChanged = 16,
  ValidatePlaylist_MatchmakingEventsChanged = 17,
  ValidatePlaylist_TournamentNewEventStarted = 18,
  ValidatePlaylist_TournamentNewEventCountdown = 19,
  ValidatePlaylist_TournamentsChanged = 20,
  ValidatePlaylist_PlayerTournamentDataRefreshed = 21,
  Initialization = 22,
  EPlaylistUpdateReason_MAX = 23
};