// Enum /Script/FortniteGame.EShowPlacardPhase
enum class EShowPlacardPhase : uint8_t
{
  None = 0,
  StartShow = 1,
  WaitBeforeInitialFadeOut = 2,
  PreShowFadeOut = 3,
  Show = 4,
  FadeOut = 5,
  PostShowFadeIn = 6,
  DoneShowingScreen = 7,
  MAX = 8
};