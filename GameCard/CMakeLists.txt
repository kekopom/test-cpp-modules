add_library(game_card)
target_sources(game_card
  PUBLIC
    FILE_SET game_card_modules TYPE CXX_MODULES FILES
    Card.cppm
)
