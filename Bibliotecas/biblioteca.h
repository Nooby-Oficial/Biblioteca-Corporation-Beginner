#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#ifdef _WIN32
#define BIBLIOTECA_API __declspec(dllexport)
#else
#define BIBLIOTECA_API __attribute__((visibility("default")))
#endif

#include "math/vector2d.h"
#include "math/matrix2d.h"
#include "math/matrix3d.h"
#include "math/quaternion.h"
#include "math/interpolation.h"
#include "math/stats.h"
#include "math/trig.h"
#include "math/random.h"
#include "utils/log.h"
#include "utils/fileutils.h"
#include "utils/stringutils.h"
#include "utils/timer.h"
#include "utils/json.h"
#include "utils/date.h"
#include "utils/compress.h"
#include "utils/uuid.h"
#include "utils/args.h"
#include "physics/aabb.h"
#include "physics/particle.h"
#include "physics/integrator.h"
#include "physics/circle.h"
#include "physics/gravity.h"
#include "graphics/color.h"
#include "graphics/draw.h"
#include "graphics/blend.h"
#include "audio/audio.h"
#include "network/net.h"
#include "network/http.h"
#include "input/input.h"
#include "platform/platform.h"
#include "ai/ai.h"
#include "ai/astar.h"
#include "ai/graph.h"

#ifdef __cplusplus
extern "C" {
#endif

// Exemplo de função exportada
BIBLIOTECA_API float biblioteca_soma(float a, float b);

#ifdef __cplusplus
}
#endif

#endif // BIBLIOTECA_H
