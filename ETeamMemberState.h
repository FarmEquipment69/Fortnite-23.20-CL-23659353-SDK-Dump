// Enum /Script/FortniteGame.ETeamMemberState
enum class ETeamMemberState : uint8_t
{
  None = 0,
  FIRST_CHAT_MESSAGE = 1,
  NeedAmmoHeavy = 1,
  NeedAmmoLight = 2,
  NeedAmmoMedium = 3,
  NeedAmmoShells = 4,
  NeedAmmoRocket = 5,
  ChatBubble = 6,
  EnemySpotted = 7,
  NeedBandages = 8,
  NeedMaterials = 9,
  NeedShields = 10,
  NeedWeapon = 11,
  LAST_CHAT_MESSAGE = 11,
  MAX = 12
};