// Enum /Script/FortniteGame.EOfferPurchaseError
enum class EOfferPurchaseError : uint8_t
{
  NoError = 0,
  PendingServerConfirmation = 1,
  CannotAffordItem = 2,
  InvalidOfferID = 3,
  InvalidPriceIndex = 4,
  NoneLeft = 5,
  PurchaseAlreadyPending = 6,
  NoConnection = 7,
  AccountNotEligible = 8,
  CannotGiftItem = 9,
  MFANotEnabled = 10,
  EOfferPurchaseError_MAX = 11
};