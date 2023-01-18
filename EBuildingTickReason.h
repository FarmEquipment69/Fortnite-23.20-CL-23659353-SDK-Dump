// Enum /Script/FortniteGame.EBuildingTickReason
enum class EBuildingTickReason : uint8_t
{
  Dynamic = 0,
  Damaged = 1,
  GameplayCue_Damage = 2,
  GameplayCue_Healing = 3,
  GameplayCue_InstantDeath = 4,
  UnderConstruction = 5,
  UnderRepair = 6,
  Editing = 7,
  BuildingAnimation = 8,
  DynamicLODAnim = 9,
  DynamicShrinkAnim = 10,
  AutoBuild = 11,
  FullHealthEffect = 12,
  BounceAnimation = 13,
  DoorOpenStyleChanged = 14,
  DoorOpenChanged = 15,
  DoorInteract = 16,
  CinematicCamera = 17,
  Blueprint = 18,
  EBuildingTickReason_MAX = 19
};