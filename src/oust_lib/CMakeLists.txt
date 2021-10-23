set(target_name oust)
add_library(${target_name} STATIC "")

target_sources(${target_name}
	PRIVATE
		"${PROJECT_SOURCE_DIR}/src/oust_lib/print_log.cpp"
		"${PROJECT_SOURCE_DIR}/src/oust_lib/stone.cpp"
		"${PROJECT_SOURCE_DIR}/src/oust_lib/stone_black.cpp"
		"${PROJECT_SOURCE_DIR}/src/oust_lib/stone_white.cpp"
		"${PROJECT_SOURCE_DIR}/src/oust_lib/plateau.cpp"

	PRIVATE
		"${PROJECT_SOURCE_DIR}/include/oust_lib/print_log.h"
		"${PROJECT_SOURCE_DIR}/include/oust_lib/stone.h"
		"${PROJECT_SOURCE_DIR}/include/oust_lib/stone_black.h"
		"${PROJECT_SOURCE_DIR}/include/oust_lib/stone_white.h"
		"${PROJECT_SOURCE_DIR}/include/oust_lib/plateau.h"


)

target_include_directories(${target_name}
	PUBLIC
		"${PROJECT_SOURCE_DIR}/include"
		"${PROJECT_BINARY_DIR}"
)