// Add entries here
// These entries are example entries which you can replace, but they exist to get you started.
// Remember to modify include/constants/help_window.h to include identifiers so they can be used in event scripts.
const struct HelpWindow gHelpWindowInfo[] =
{
    [HELP_START_MENU] =
    {
        .header = COMPOUND_STRING("Information: Pokédex"),
        .desc = COMPOUND_STRING("To access the Pokédex, press {START_BUTTON}\n"
                                "while you're in the overworld!"
                            ),
        .headerFont = FONT_NORMAL,
        .descFont = FONT_NORMAL
    },
    [HELP_MEGA_EVOLUTION] =
    {
        .header = COMPOUND_STRING("Information: Mega Evolution"),
        .desc = COMPOUND_STRING("In battle, press {START_BUTTON} to Mega Evolve!\n\n"
                                "The Pokémon must hold their Mega Stone\n"
                                "to be able to Mega Evolve.\n"
                                "You can only Mega Evolve once per battle."
                            ),
    },
    [HELP_MASTER_BALL] =
    {
        .header = COMPOUND_STRING("Information: Master Ball"),
        .desc = COMPOUND_STRING("There is only one Master Ball in Pokémon;\n"
                                "use it wisely!\n"
                                "Professor Oak suggests using it on a Pokémon\n"
                                "you want to add to your team but are hard to\n"
                                "catch, like a Fearow or Tentacruel!"
                            ),
    },
    [HELP_GIMMIGHOUL_COINS] =
    {
        .header = COMPOUND_STRING("Information: Evolving Gimmighoul into Gholdengo"),
        .desc = COMPOUND_STRING("To evolve Gimmighoul into Gholdengo, you\n"
                                "need to gather 999 {COLOR RED}Gimmighoul Coins{COLOR DARK_GRAY}.\n\n"
                                "You can find Gimmighoul Coins scattered\n"
                                "all around Paldea."
                            ),
        .headerFont = FONT_NARROWER,
    },
    // Add more entries
    [HELP_BATTLE_TUTORIAL] =
    {
        .header = COMPOUND_STRING("Battle Tutorial"),
        .desc = COMPOUND_STRING("In a battle, each Pokémon has four moves:\n"
                                "  an damaging attacking move,\n"
                                "  a protective defensive move,\n"
                                "  a stat changing status move, and\n"
                                "  a move unique to the Pokémon who uses it.\n\n"
                                "Read the move descriptions each battle to\nfind the correct combination and win!"
                            ),
        // .headerFont = FONT_SHORT,
    },
    
    [HELP_RAMPARDOS_RIDDLE] =
    {
        .header = COMPOUND_STRING("Rampardos Paddock"),
        .desc = COMPOUND_STRING("Rampardos rams in threes,\n"
                                "Just one warning before two strides.\n"
                                "Then back to one, a rhythm like the tide.\n\n"
                                "Count the cycle, if you wish to thrive...\n"
                                "One... Two... Two... Back to One...\n\n"
                                "This is how to survive!"
                            ),
        .headerFont = FONT_SHORT,
    },
};
