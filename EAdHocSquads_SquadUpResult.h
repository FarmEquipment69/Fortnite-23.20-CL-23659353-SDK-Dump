// Enum /Script/FortniteGame.EAdHocSquads_SquadUpResult
enum class EAdHocSquads_SquadUpResult : uint8_t
{
  Success = 0,
  Failure_OneOrMorePlayersWereNull = 1,
  Failure_BothPlayersAreInAdHocSquads = 2,
  Failure_BothPlayersAreAlreadyInTheSameAdHocSquad = 3,
  Failure_CouldNotCreateAdHocSquad = 4,
  Failure_CalledOnClient = 5,
  Failure_SquadIsAlreadyFull = 6,
  Failure_TooManyPlayersToMergeSquads = 7,
  Failure_MutatorIsDisabled = 8,
  Failure_Unknown = 9,
  Failure_Custom = 10,
  EAdHocSquads_MAX = 11
};