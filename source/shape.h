/*#pragma once

float vertecies[][3] = {
{0.000000,-1.000000,-1.000000},
{0.866025,-1.000000,0.500000},
{-0.866025,-1.000000,0.500000},
{0.000000,1.000000,0.000000}
};

int polygons[][4] = {
{1,4,2,-1},
{1,2,3,-1},
{2,4,3,-1},
{3,4,1,-1}
};
*/

#pragma once

float vertecies[][3] = {
{0.437500,0.164062,0.765625},
{-0.437500,0.164062,0.765625},
{0.500000,0.093750,0.687500},
{-0.500000,0.093750,0.687500},
{0.546875,0.054688,0.578125},
{-0.546875,0.054688,0.578125},
{0.351562,-0.023438,0.617188},
{-0.351562,-0.023438,0.617188},
{0.351562,0.031250,0.718750},
{-0.351562,0.031250,0.718750},
{0.351562,0.132812,0.781250},
{-0.351562,0.132812,0.781250},
{0.273438,0.164062,0.796875},
{-0.273438,0.164062,0.796875},
{0.203125,0.093750,0.742188},
{-0.203125,0.093750,0.742188},
{0.156250,0.054688,0.648438},
{-0.156250,0.054688,0.648438},
{0.078125,0.242188,0.656250},
{-0.078125,0.242188,0.656250},
{0.140625,0.242188,0.742188},
{-0.140625,0.242188,0.742188},
{0.242188,0.242188,0.796875},
{-0.242188,0.242188,0.796875},
{0.273438,0.328125,0.796875},
{-0.273438,0.328125,0.796875},
{0.203125,0.390625,0.742188},
{-0.203125,0.390625,0.742188},
{0.156250,0.437500,0.648438},
{-0.156250,0.437500,0.648438},
{0.351562,0.515625,0.617188},
{-0.351562,0.515625,0.617188},
{0.351562,0.453125,0.718750},
{-0.351562,0.453125,0.718750},
{0.351562,0.359375,0.781250},
{-0.351562,0.359375,0.781250},
{0.437500,0.328125,0.765625},
{-0.437500,0.328125,0.765625},
{0.500000,0.390625,0.687500},
{-0.500000,0.390625,0.687500},
{0.546875,0.437500,0.578125},
{-0.546875,0.437500,0.578125},
{0.625000,0.242188,0.562500},
{-0.625000,0.242188,0.562500},
{0.562500,0.242188,0.671875},
{-0.562500,0.242188,0.671875},
{0.468750,0.242188,0.757812},
{-0.468750,0.242188,0.757812},
{0.476562,0.242188,0.773438},
{-0.476562,0.242188,0.773438},
{0.445312,0.335938,0.781250},
{-0.445312,0.335938,0.781250},
{0.351562,0.375000,0.804688},
{-0.351562,0.375000,0.804688},
{0.265625,0.335938,0.820312},
{-0.265625,0.335938,0.820312},
{0.226562,0.242188,0.820312},
{-0.226562,0.242188,0.820312},
{0.265625,0.156250,0.820312},
{-0.265625,0.156250,0.820312},
{0.351562,0.242188,0.828125},
{-0.351562,0.242188,0.828125},
{0.351562,0.117188,0.804688},
{-0.351562,0.117188,0.804688},
{0.445312,0.156250,0.781250},
{-0.445312,0.156250,0.781250},
{0.000000,0.429688,0.742188},
{0.000000,0.351562,0.820312},
{0.000000,-0.679688,0.734375},
{0.000000,-0.320312,0.781250},
{0.000000,-0.187500,0.796875},
{0.000000,-0.773438,0.718750},
{0.000000,0.406250,0.601562},
{0.000000,0.570312,0.570312},
{0.000000,0.898438,-0.546875},
{0.000000,0.562500,-0.851562},
{0.000000,0.070312,-0.828125},
{0.000000,-0.382812,-0.351562},
{0.203125,-0.187500,0.562500},
{-0.203125,-0.187500,0.562500},
{0.312500,-0.437500,0.570312},
{-0.312500,-0.437500,0.570312},
{0.351562,-0.695312,0.570312},
{-0.351562,-0.695312,0.570312},
{0.367188,-0.890625,0.531250},
{-0.367188,-0.890625,0.531250},
{0.328125,-0.945312,0.523438},
{-0.328125,-0.945312,0.523438},
{0.179688,-0.968750,0.554688},
{-0.179688,-0.968750,0.554688},
{0.000000,-0.984375,0.578125},
{0.437500,-0.140625,0.531250},
{-0.437500,-0.140625,0.531250},
{0.632812,-0.039062,0.539062},
{-0.632812,-0.039062,0.539062},
{0.828125,0.148438,0.445312},
{-0.828125,0.148438,0.445312},
{0.859375,0.429688,0.593750},
{-0.859375,0.429688,0.593750},
{0.710938,0.484375,0.625000},
{-0.710938,0.484375,0.625000},
{0.492188,0.601562,0.687500},
{-0.492188,0.601562,0.687500},
{0.320312,0.757812,0.734375},
{-0.320312,0.757812,0.734375},
{0.156250,0.718750,0.757812},
{-0.156250,0.718750,0.757812},
{0.062500,0.492188,0.750000},
{-0.062500,0.492188,0.750000},
{0.164062,0.414062,0.773438},
{-0.164062,0.414062,0.773438},
{0.125000,0.304688,0.765625},
{-0.125000,0.304688,0.765625},
{0.203125,0.093750,0.742188},
{-0.203125,0.093750,0.742188},
{0.375000,0.015625,0.703125},
{-0.375000,0.015625,0.703125},
{0.492188,0.062500,0.671875},
{-0.492188,0.062500,0.671875},
{0.625000,0.187500,0.648438},
{-0.625000,0.187500,0.648438},
{0.640625,0.296875,0.648438},
{-0.640625,0.296875,0.648438},
{0.601562,0.375000,0.664062},
{-0.601562,0.375000,0.664062},
{0.429688,0.437500,0.718750},
{-0.429688,0.437500,0.718750},
{0.250000,0.468750,0.757812},
{-0.250000,0.468750,0.757812},
{0.000000,-0.765625,0.734375},
{0.109375,-0.718750,0.734375},
{-0.109375,-0.718750,0.734375},
{0.117188,-0.835938,0.710938},
{-0.117188,-0.835938,0.710938},
{0.062500,-0.882812,0.695312},
{-0.062500,-0.882812,0.695312},
{0.000000,-0.890625,0.687500},
{0.000000,-0.195312,0.750000},
{0.000000,-0.140625,0.742188},
{0.101562,-0.148438,0.742188},
{-0.101562,-0.148438,0.742188},
{0.125000,-0.226562,0.750000},
{-0.125000,-0.226562,0.750000},
{0.085938,-0.289062,0.742188},
{-0.085938,-0.289062,0.742188},
{0.398438,-0.046875,0.671875},
{-0.398438,-0.046875,0.671875},
{0.617188,0.054688,0.625000},
{-0.617188,0.054688,0.625000},
{0.726562,0.203125,0.601562},
{-0.726562,0.203125,0.601562},
{0.742188,0.375000,0.656250},
{-0.742188,0.375000,0.656250},
{0.687500,0.414062,0.726562},
{-0.687500,0.414062,0.726562},
{0.437500,0.546875,0.796875},
{-0.437500,0.546875,0.796875},
{0.312500,0.640625,0.835938},
{-0.312500,0.640625,0.835938},
{0.203125,0.617188,0.851562},
{-0.203125,0.617188,0.851562},
{0.101562,0.429688,0.843750},
{-0.101562,0.429688,0.843750},
{0.125000,-0.101562,0.812500},
{-0.125000,-0.101562,0.812500},
{0.210938,-0.445312,0.710938},
{-0.210938,-0.445312,0.710938},
{0.250000,-0.703125,0.687500},
{-0.250000,-0.703125,0.687500},
{0.265625,-0.820312,0.664062},
{-0.265625,-0.820312,0.664062},
{0.234375,-0.914062,0.632812},
{-0.234375,-0.914062,0.632812},
{0.164062,-0.929688,0.632812},
{-0.164062,-0.929688,0.632812},
{0.000000,-0.945312,0.640625},
{0.000000,0.046875,0.726562},
{0.000000,0.210938,0.765625},
{0.328125,0.476562,0.742188},
{-0.328125,0.476562,0.742188},
{0.164062,0.140625,0.750000},
{-0.164062,0.140625,0.750000},
{0.132812,0.210938,0.757812},
{-0.132812,0.210938,0.757812},
{0.117188,-0.687500,0.734375},
{-0.117188,-0.687500,0.734375},
{0.078125,-0.445312,0.750000},
{-0.078125,-0.445312,0.750000},
{0.000000,-0.445312,0.750000},
{0.000000,-0.328125,0.742188},
{0.093750,-0.273438,0.781250},
{-0.093750,-0.273438,0.781250},
{0.132812,-0.226562,0.796875},
{-0.132812,-0.226562,0.796875},
{0.109375,-0.132812,0.781250},
{-0.109375,-0.132812,0.781250},
{0.039062,-0.125000,0.781250},
{-0.039062,-0.125000,0.781250},
{0.000000,-0.203125,0.828125},
{0.046875,-0.148438,0.812500},
{-0.046875,-0.148438,0.812500},
{0.093750,-0.156250,0.812500},
{-0.093750,-0.156250,0.812500},
{0.109375,-0.226562,0.828125},
{-0.109375,-0.226562,0.828125},
{0.078125,-0.250000,0.804688},
{-0.078125,-0.250000,0.804688},
{0.000000,-0.289062,0.804688},
{0.257812,-0.312500,0.554688},
{-0.257812,-0.312500,0.554688},
{0.164062,-0.242188,0.710938},
{-0.164062,-0.242188,0.710938},
{0.179688,-0.312500,0.710938},
{-0.179688,-0.312500,0.710938},
{0.234375,-0.250000,0.554688},
{-0.234375,-0.250000,0.554688},
{0.000000,-0.875000,0.687500},
{0.046875,-0.867188,0.687500},
{-0.046875,-0.867188,0.687500},
{0.093750,-0.820312,0.710938},
{-0.093750,-0.820312,0.710938},
{0.093750,-0.742188,0.726562},
{-0.093750,-0.742188,0.726562},
{0.000000,-0.781250,0.656250},
{0.093750,-0.750000,0.664062},
{-0.093750,-0.750000,0.664062},
{0.093750,-0.812500,0.640625},
{-0.093750,-0.812500,0.640625},
{0.046875,-0.851562,0.632812},
{-0.046875,-0.851562,0.632812},
{0.000000,-0.859375,0.632812},
{0.171875,0.218750,0.781250},
{-0.171875,0.218750,0.781250},
{0.187500,0.156250,0.773438},
{-0.187500,0.156250,0.773438},
{0.335938,0.429688,0.757812},
{-0.335938,0.429688,0.757812},
{0.273438,0.421875,0.773438},
{-0.273438,0.421875,0.773438},
{0.421875,0.398438,0.773438},
{-0.421875,0.398438,0.773438},
{0.562500,0.351562,0.695312},
{-0.562500,0.351562,0.695312},
{0.585938,0.289062,0.687500},
{-0.585938,0.289062,0.687500},
{0.578125,0.195312,0.679688},
{-0.578125,0.195312,0.679688},
{0.476562,0.101562,0.718750},
{-0.476562,0.101562,0.718750},
{0.375000,0.062500,0.742188},
{-0.375000,0.062500,0.742188},
{0.226562,0.109375,0.781250},
{-0.226562,0.109375,0.781250},
{0.179688,0.296875,0.781250},
{-0.179688,0.296875,0.781250},
{0.210938,0.375000,0.781250},
{-0.210938,0.375000,0.781250},
{0.234375,0.359375,0.757812},
{-0.234375,0.359375,0.757812},
{0.195312,0.296875,0.757812},
{-0.195312,0.296875,0.757812},
{0.242188,0.125000,0.757812},
{-0.242188,0.125000,0.757812},
{0.375000,0.085938,0.726562},
{-0.375000,0.085938,0.726562},
{0.460938,0.117188,0.703125},
{-0.460938,0.117188,0.703125},
{0.546875,0.210938,0.671875},
{-0.546875,0.210938,0.671875},
{0.554688,0.281250,0.671875},
{-0.554688,0.281250,0.671875},
{0.531250,0.335938,0.679688},
{-0.531250,0.335938,0.679688},
{0.414062,0.390625,0.750000},
{-0.414062,0.390625,0.750000},
{0.281250,0.398438,0.765625},
{-0.281250,0.398438,0.765625},
{0.335938,0.406250,0.750000},
{-0.335938,0.406250,0.750000},
{0.203125,0.171875,0.750000},
{-0.203125,0.171875,0.750000},
{0.195312,0.226562,0.750000},
{-0.195312,0.226562,0.750000},
{0.109375,0.460938,0.609375},
{-0.109375,0.460938,0.609375},
{0.195312,0.664062,0.617188},
{-0.195312,0.664062,0.617188},
{0.335938,0.687500,0.593750},
{-0.335938,0.687500,0.593750},
{0.484375,0.554688,0.554688},
{-0.484375,0.554688,0.554688},
{0.679688,0.453125,0.492188},
{-0.679688,0.453125,0.492188},
{0.796875,0.406250,0.460938},
{-0.796875,0.406250,0.460938},
{0.773438,0.164062,0.375000},
{-0.773438,0.164062,0.375000},
{0.601562,0.000000,0.414062},
{-0.601562,0.000000,0.414062},
{0.437500,-0.093750,0.468750},
{-0.437500,-0.093750,0.468750},
{0.000000,0.898438,0.289062},
{0.000000,0.984375,-0.078125},
{0.000000,-0.195312,-0.671875},
{0.000000,-0.460938,0.187500},
{0.000000,-0.976562,0.460938},
{0.000000,-0.804688,0.343750},
{0.000000,-0.570312,0.320312},
{0.000000,-0.484375,0.281250},
{0.851562,0.234375,0.054688},
{-0.851562,0.234375,0.054688},
{0.859375,0.320312,-0.046875},
{-0.859375,0.320312,-0.046875},
{0.773438,0.265625,-0.437500},
{-0.773438,0.265625,-0.437500},
{0.460938,0.437500,-0.703125},
{-0.460938,0.437500,-0.703125},
{0.734375,-0.046875,0.070312},
{-0.734375,-0.046875,0.070312},
{0.593750,-0.125000,-0.164062},
{-0.593750,-0.125000,-0.164062},
{0.640625,-0.007812,-0.429688},
{-0.640625,-0.007812,-0.429688},
{0.335938,0.054688,-0.664062},
{-0.335938,0.054688,-0.664062},
{0.234375,-0.351562,0.406250},
{-0.234375,-0.351562,0.406250},
{0.179688,-0.414062,0.257812},
{-0.179688,-0.414062,0.257812},
{0.289062,-0.710938,0.382812},
{-0.289062,-0.710938,0.382812},
{0.250000,-0.500000,0.390625},
{-0.250000,-0.500000,0.390625},
{0.328125,-0.914062,0.398438},
{-0.328125,-0.914062,0.398438},
{0.140625,-0.757812,0.367188},
{-0.140625,-0.757812,0.367188},
{0.125000,-0.539062,0.359375},
{-0.125000,-0.539062,0.359375},
{0.164062,-0.945312,0.437500},
{-0.164062,-0.945312,0.437500},
{0.218750,-0.281250,0.429688},
{-0.218750,-0.281250,0.429688},
{0.210938,-0.226562,0.468750},
{-0.210938,-0.226562,0.468750},
{0.203125,-0.171875,0.500000},
{-0.203125,-0.171875,0.500000},
{0.210938,-0.390625,0.164062},
{-0.210938,-0.390625,0.164062},
{0.296875,-0.312500,-0.265625},
{-0.296875,-0.312500,-0.265625},
{0.343750,-0.148438,-0.539062},
{-0.343750,-0.148438,-0.539062},
{0.453125,0.867188,-0.382812},
{-0.453125,0.867188,-0.382812},
{0.453125,0.929688,-0.070312},
{-0.453125,0.929688,-0.070312},
{0.453125,0.851562,0.234375},
{-0.453125,0.851562,0.234375},
{0.460938,0.523438,0.429688},
{-0.460938,0.523438,0.429688},
{0.726562,0.406250,0.335938},
{-0.726562,0.406250,0.335938},
{0.632812,0.453125,0.281250},
{-0.632812,0.453125,0.281250},
{0.640625,0.703125,0.054688},
{-0.640625,0.703125,0.054688},
{0.796875,0.562500,0.125000},
{-0.796875,0.562500,0.125000},
{0.796875,0.617188,-0.117188},
{-0.796875,0.617188,-0.117188},
{0.640625,0.750000,-0.195312},
{-0.640625,0.750000,-0.195312},
{0.640625,0.679688,-0.445312},
{-0.640625,0.679688,-0.445312},
{0.796875,0.539062,-0.359375},
{-0.796875,0.539062,-0.359375},
{0.617188,0.328125,-0.585938},
{-0.617188,0.328125,-0.585938},
{0.484375,0.023438,-0.546875},
{-0.484375,0.023438,-0.546875},
{0.820312,0.328125,-0.203125},
{-0.820312,0.328125,-0.203125},
{0.406250,-0.171875,0.148438},
{-0.406250,-0.171875,0.148438},
{0.429688,-0.195312,-0.210938},
{-0.429688,-0.195312,-0.210938},
{0.890625,0.406250,-0.234375},
{-0.890625,0.406250,-0.234375},
{0.773438,-0.140625,-0.125000},
{-0.773438,-0.140625,-0.125000},
{1.039062,-0.101562,-0.328125},
{-1.039062,-0.101562,-0.328125},
{1.281250,0.054688,-0.429688},
{-1.281250,0.054688,-0.429688},
{1.351562,0.320312,-0.421875},
{-1.351562,0.320312,-0.421875},
{1.234375,0.507812,-0.421875},
{-1.234375,0.507812,-0.421875},
{1.023438,0.476562,-0.312500},
{-1.023438,0.476562,-0.312500},
{1.015625,0.414062,-0.289062},
{-1.015625,0.414062,-0.289062},
{1.187500,0.437500,-0.390625},
{-1.187500,0.437500,-0.390625},
{1.265625,0.289062,-0.406250},
{-1.265625,0.289062,-0.406250},
{1.210938,0.078125,-0.406250},
{-1.210938,0.078125,-0.406250},
{1.031250,-0.039062,-0.304688},
{-1.031250,-0.039062,-0.304688},
{0.828125,-0.070312,-0.132812},
{-0.828125,-0.070312,-0.132812},
{0.921875,0.359375,-0.218750},
{-0.921875,0.359375,-0.218750},
{0.945312,0.304688,-0.289062},
{-0.945312,0.304688,-0.289062},
{0.882812,-0.023438,-0.210938},
{-0.882812,-0.023438,-0.210938},
{1.039062,0.000000,-0.367188},
{-1.039062,0.000000,-0.367188},
{1.187500,0.093750,-0.445312},
{-1.187500,0.093750,-0.445312},
{1.234375,0.250000,-0.445312},
{-1.234375,0.250000,-0.445312},
{1.171875,0.359375,-0.437500},
{-1.171875,0.359375,-0.437500},
{1.023438,0.343750,-0.359375},
{-1.023438,0.343750,-0.359375},
{0.843750,0.289062,-0.210938},
{-0.843750,0.289062,-0.210938},
{0.835938,0.171875,-0.273438},
{-0.835938,0.171875,-0.273438},
{0.757812,0.093750,-0.273438},
{-0.757812,0.093750,-0.273438},
{0.820312,0.085938,-0.273438},
{-0.820312,0.085938,-0.273438},
{0.843750,0.015625,-0.273438},
{-0.843750,0.015625,-0.273438},
{0.812500,-0.015625,-0.273438},
{-0.812500,-0.015625,-0.273438},
{0.726562,0.000000,-0.070312},
{-0.726562,0.000000,-0.070312},
{0.718750,-0.023438,-0.171875},
{-0.718750,-0.023438,-0.171875},
{0.718750,0.039062,-0.187500},
{-0.718750,0.039062,-0.187500},
{0.796875,0.203125,-0.210938},
{-0.796875,0.203125,-0.210938},
{0.890625,0.242188,-0.265625},
{-0.890625,0.242188,-0.265625},
{0.890625,0.234375,-0.320312},
{-0.890625,0.234375,-0.320312},
{0.812500,-0.015625,-0.320312},
{-0.812500,-0.015625,-0.320312},
{0.851562,0.015625,-0.320312},
{-0.851562,0.015625,-0.320312},
{0.828125,0.078125,-0.320312},
{-0.828125,0.078125,-0.320312},
{0.765625,0.093750,-0.320312},
{-0.765625,0.093750,-0.320312},
{0.843750,0.171875,-0.320312},
{-0.843750,0.171875,-0.320312},
{1.039062,0.328125,-0.414062},
{-1.039062,0.328125,-0.414062},
{1.187500,0.343750,-0.484375},
{-1.187500,0.343750,-0.484375},
{1.257812,0.242188,-0.492188},
{-1.257812,0.242188,-0.492188},
{1.210938,0.085938,-0.484375},
{-1.210938,0.085938,-0.484375},
{1.046875,0.000000,-0.421875},
{-1.046875,0.000000,-0.421875},
{0.882812,-0.015625,-0.265625},
{-0.882812,-0.015625,-0.265625},
{0.953125,0.289062,-0.343750},
{-0.953125,0.289062,-0.343750},
{0.890625,0.109375,-0.328125},
{-0.890625,0.109375,-0.328125},
{0.937500,0.062500,-0.335938},
{-0.937500,0.062500,-0.335938},
{1.000000,0.125000,-0.367188},
{-1.000000,0.125000,-0.367188},
{0.960938,0.171875,-0.351562},
{-0.960938,0.171875,-0.351562},
{1.015625,0.234375,-0.375000},
{-1.015625,0.234375,-0.375000},
{1.054688,0.187500,-0.382812},
{-1.054688,0.187500,-0.382812},
{1.109375,0.210938,-0.390625},
{-1.109375,0.210938,-0.390625},
{1.085938,0.273438,-0.390625},
{-1.085938,0.273438,-0.390625},
{1.023438,0.437500,-0.484375},
{-1.023438,0.437500,-0.484375},
{1.250000,0.468750,-0.546875},
{-1.250000,0.468750,-0.546875},
{1.367188,0.296875,-0.500000},
{-1.367188,0.296875,-0.500000},
{1.312500,0.054688,-0.531250},
{-1.312500,0.054688,-0.531250},
{1.039062,-0.085938,-0.492188},
{-1.039062,-0.085938,-0.492188},
{0.789062,-0.125000,-0.328125},
{-0.789062,-0.125000,-0.328125},
{0.859375,0.382812,-0.382812},
{-0.859375,0.382812,-0.382812},
};

int polygons[][4] = {
{47,1,3,45},
{4,2,48,46},
{45,3,5,43},
{6,4,46,44},
{3,9,7,5},
{8,10,4,6},
{1,11,9,3},
{10,12,2,4},
{11,13,15,9},
{16,14,12,10},
{9,15,17,7},
{18,16,10,8},
{15,21,19,17},
{20,22,16,18},
{13,23,21,15},
{22,24,14,16},
{23,25,27,21},
{28,26,24,22},
{21,27,29,19},
{30,28,22,20},
{27,33,31,29},
{32,34,28,30},
{25,35,33,27},
{34,36,26,28},
{35,37,39,33},
{40,38,36,34},
{33,39,41,31},
{42,40,34,32},
{39,45,43,41},
{44,46,40,42},
{37,47,45,39},
{46,48,38,40},
{47,37,51,49},
{52,38,48,50},
{37,35,53,51},
{54,36,38,52},
{35,25,55,53},
{56,26,36,54},
{25,23,57,55},
{58,24,26,56},
{23,13,59,57},
{60,14,24,58},
{13,11,63,59},
{64,12,14,60},
{11,1,65,63},
{66,2,12,64},
{1,47,49,65},
{50,48,2,66},
{61,65,49,-1},
{50,66,62,-1},
{63,65,61,-1},
{62,66,64,-1},
{61,59,63,-1},
{64,60,62,-1},
{61,57,59,-1},
{60,58,62,-1},
{61,55,57,-1},
{58,56,62,-1},
{61,53,55,-1},
{56,54,62,-1},
{61,51,53,-1},
{54,52,62,-1},
{61,49,51,-1},
{52,50,62,-1},
{89,174,176,91},
{176,175,90,91},
{87,172,174,89},
{175,173,88,90},
{85,170,172,87},
{173,171,86,88},
{83,168,170,85},
{171,169,84,86},
{81,166,168,83},
{169,167,82,84},
{79,92,146,164},
{147,93,80,165},
{92,94,148,146},
{149,95,93,147},
{94,96,150,148},
{151,97,95,149},
{96,98,152,150},
{153,99,97,151},
{98,100,154,152},
{155,101,99,153},
{100,102,156,154},
{157,103,101,155},
{102,104,158,156},
{159,105,103,157},
{104,106,160,158},
{161,107,105,159},
{106,108,162,160},
{163,109,107,161},
{108,67,68,162},
{68,67,109,163},
{110,128,160,162},
{161,129,111,163},
{128,179,158,160},
{159,180,129,161},
{126,156,158,179},
{159,157,127,180},
{124,154,156,126},
{157,155,125,127},
{122,152,154,124},
{155,153,123,125},
{120,150,152,122},
{153,151,121,123},
{118,148,150,120},
{151,149,119,121},
{116,146,148,118},
{149,147,117,119},
{114,164,146,116},
{147,165,115,117},
{114,181,177,164},
{177,182,115,165},
{110,162,68,112},
{68,163,111,113},
{112,68,178,183},
{178,68,113,184},
{177,181,183,178},
{184,182,177,178},
{135,137,176,174},
{176,137,136,175},
{133,135,174,172},
{175,136,134,173},
{131,133,172,170},
{173,134,132,171},
{166,187,185,168},
{186,188,167,169},
{131,170,168,185},
{169,171,132,186},
{144,190,189,187},
{189,190,145,188},
{185,187,189,69},
{189,188,186,69},
{130,131,185,69},
{186,132,130,69},
{142,193,191,144},
{192,194,143,145},
{140,195,193,142},
{194,196,141,143},
{139,197,195,140},
{196,198,139,141},
{138,71,197,139},
{198,71,138,139},
{190,144,191,70},
{192,145,190,70},
{70,191,206,208},
{207,192,70,208},
{71,199,200,197},
{201,199,71,198},
{197,200,202,195},
{203,201,198,196},
{195,202,204,193},
{205,203,196,194},
{193,204,206,191},
{207,205,194,192},
{199,204,202,200},
{203,205,199,201},
{199,208,206,204},
{207,208,199,205},
{139,140,164,177},
{165,141,139,177},
{140,142,211,164},
{212,143,141,165},
{142,144,213,211},
{214,145,143,212},
{144,187,166,213},
{167,188,145,214},
{81,209,213,166},
{214,210,82,167},
{209,215,211,213},
{212,216,210,214},
{79,164,211,215},
{212,165,80,216},
{131,130,72,222},
{72,130,132,223},
{133,131,222,220},
{223,132,134,221},
{135,133,220,218},
{221,134,136,219},
{137,135,218,217},
{219,136,137,217},
{217,218,229,231},
{230,219,217,231},
{218,220,227,229},
{228,221,219,230},
{220,222,225,227},
{226,223,221,228},
{222,72,224,225},
{224,72,223,226},
{224,231,229,225},
{230,231,224,226},
{225,229,227,-1},
{228,230,226,-1},
{183,181,234,232},
{235,182,184,233},
{112,183,232,254},
{233,184,113,255},
{110,112,254,256},
{255,113,111,257},
{181,114,252,234},
{253,115,182,235},
{114,116,250,252},
{251,117,115,253},
{116,118,248,250},
{249,119,117,251},
{118,120,246,248},
{247,121,119,249},
{120,122,244,246},
{245,123,121,247},
{122,124,242,244},
{243,125,123,245},
{124,126,240,242},
{241,127,125,243},
{126,179,236,240},
{237,180,127,241},
{179,128,238,236},
{239,129,180,237},
{128,110,256,238},
{257,111,129,239},
{238,256,258,276},
{259,257,239,277},
{236,238,276,278},
{277,239,237,279},
{240,236,278,274},
{279,237,241,275},
{242,240,274,272},
{275,241,243,273},
{244,242,272,270},
{273,243,245,271},
{246,244,270,268},
{271,245,247,269},
{248,246,268,266},
{269,247,249,267},
{250,248,266,264},
{267,249,251,265},
{252,250,264,262},
{265,251,253,263},
{234,252,262,280},
{263,253,235,281},
{256,254,260,258},
{261,255,257,259},
{254,232,282,260},
{283,233,255,261},
{232,234,280,282},
{281,235,233,283},
{67,108,284,73},
{285,109,67,73},
{108,106,286,284},
{287,107,109,285},
{106,104,288,286},
{289,105,107,287},
{104,102,290,288},
{291,103,105,289},
{102,100,292,290},
{293,101,103,291},
{100,98,294,292},
{295,99,101,293},
{98,96,296,294},
{297,97,99,295},
{96,94,298,296},
{299,95,97,297},
{94,92,300,298},
{301,93,95,299},
{308,309,328,338},
{329,309,308,339},
{307,308,338,336},
{339,308,307,337},
{306,307,336,340},
{337,307,306,341},
{89,91,306,340},
{306,91,90,341},
{87,89,340,334},
{341,90,88,335},
{85,87,334,330},
{335,88,86,331},
{83,85,330,332},
{331,86,84,333},
{330,336,338,332},
{339,337,331,333},
{330,334,340,336},
{341,335,331,337},
{326,332,338,328},
{339,333,327,329},
{81,83,332,326},
{333,84,82,327},
{209,342,344,215},
{345,343,210,216},
{81,326,342,209},
{343,327,82,210},
{79,215,344,346},
{345,216,80,347},
{79,346,300,92},
{301,347,80,93},
{77,324,352,304},
{353,325,77,304},
{304,352,350,78},
{351,353,304,78},
{78,350,348,305},
{349,351,78,305},
{305,348,328,309},
{329,349,305,309},
{326,328,348,342},
{349,329,327,343},
{296,298,318,310},
{319,299,297,311},
{76,316,324,77},
{325,317,76,77},
{302,358,356,303},
{357,359,302,303},
{303,356,354,75},
{355,357,303,75},
{75,354,316,76},
{317,355,75,76},
{292,294,362,364},
{363,295,293,365},
{364,362,368,366},
{369,363,365,367},
{366,368,370,372},
{371,369,367,373},
{372,370,376,374},
{377,371,373,375},
{314,378,374,376},
{375,379,315,377},
{316,354,374,378},
{375,355,317,379},
{354,356,372,374},
{373,357,355,375},
{356,358,366,372},
{367,359,357,373},
{358,360,364,366},
{365,361,359,367},
{290,292,364,360},
{365,293,291,361},
{74,360,358,302},
{359,361,74,302},
{284,286,288,290},
{289,287,285,291},
{284,290,360,74},
{361,291,285,74},
{73,284,74,-1},
{74,285,73,-1},
{294,296,310,362},
{311,297,295,363},
{310,312,368,362},
{369,313,311,363},
{312,382,370,368},
{371,383,313,369},
{314,376,370,382},
{371,377,315,383},
{348,350,386,384},
{387,351,349,385},
{318,384,386,320},
{387,385,319,321},
{298,300,384,318},
{385,301,299,319},
{300,344,342,384},
{343,345,301,385},
{342,348,384,-1},
{385,349,343,-1},
{300,346,344,-1},
{345,347,301,-1},
{314,322,380,378},
{381,323,315,379},
{316,378,380,324},
{381,379,317,325},
{320,386,380,322},
{381,387,321,323},
{350,352,380,386},
{381,353,351,387},
{324,380,352,-1},
{353,381,325,-1},
{400,388,414,402},
{415,389,401,403},
{400,402,404,398},
{405,403,401,399},
{398,404,406,396},
{407,405,399,397},
{396,406,408,394},
{409,407,397,395},
{394,408,410,392},
{411,409,395,393},
{392,410,412,390},
{413,411,393,391},
{410,420,418,412},
{419,421,411,413},
{408,422,420,410},
{421,423,409,411},
{406,424,422,408},
{423,425,407,409},
{404,426,424,406},
{425,427,405,407},
{402,428,426,404},
{427,429,403,405},
{402,414,416,428},
{417,415,403,429},
{318,320,444,442},
{445,321,319,443},
{320,390,412,444},
{413,391,321,445},
{310,318,442,312},
{443,319,311,313},
{382,430,414,388},
{415,431,383,389},
{412,418,440,444},
{441,419,413,445},
{438,446,444,440},
{445,447,439,441},
{434,446,438,436},
{439,447,435,437},
{432,448,446,434},
{447,449,433,435},
{430,448,432,450},
{433,449,431,451},
{414,430,450,416},
{451,431,415,417},
{312,448,430,382},
{431,449,313,383},
{312,442,446,448},
{447,443,313,449},
{442,444,446,-1},
{447,445,443,-1},
{416,450,452,476},
{453,451,417,477},
{450,432,462,452},
{463,433,451,453},
{432,434,460,462},
{461,435,433,463},
{434,436,458,460},
{459,437,435,461},
{436,438,456,458},
{457,439,437,459},
{438,440,454,456},
{455,441,439,457},
{440,418,474,454},
{475,419,441,455},
{428,416,476,464},
{477,417,429,465},
{426,428,464,466},
{465,429,427,467},
{424,426,466,468},
{467,427,425,469},
{422,424,468,470},
{469,425,423,471},
{420,422,470,472},
{471,423,421,473},
{418,420,472,474},
{473,421,419,475},
{458,456,480,478},
{481,457,459,479},
{478,480,482,484},
{483,481,479,485},
{484,482,488,486},
{489,483,485,487},
{486,488,490,492},
{491,489,487,493},
{464,476,486,492},
{487,477,465,493},
{452,484,486,476},
{487,485,453,477},
{452,462,478,484},
{479,463,453,485},
{458,478,462,460},
{463,479,459,461},
{454,474,480,456},
{481,475,455,457},
{472,482,480,474},
{481,483,473,475},
{470,488,482,472},
{483,489,471,473},
{468,490,488,470},
{489,491,469,471},
{466,492,490,468},
{491,493,467,469},
{464,492,466,-1},
{467,493,465,-1},
{392,390,504,502},
{505,391,393,503},
{394,392,502,500},
{503,393,395,501},
{396,394,500,498},
{501,395,397,499},
{398,396,498,496},
{499,397,399,497},
{400,398,496,494},
{497,399,401,495},
{388,400,494,506},
{495,401,389,507},
{494,502,504,506},
{505,503,495,507},
{494,496,500,502},
{501,497,495,503},
{496,498,500,-1},
{501,499,497,-1},
{314,382,388,506},
{389,383,315,507},
{314,506,504,322},
{505,507,315,323},
{320,322,504,390},
{505,323,321,391},
};