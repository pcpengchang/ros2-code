# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/DebugArmor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DebugArmor(type):
    """Metaclass of message 'DebugArmor'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.msg.DebugArmor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__debug_armor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__debug_armor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__debug_armor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__debug_armor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__debug_armor

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DebugArmor(metaclass=Metaclass_DebugArmor):
    """Message class 'DebugArmor'."""

    __slots__ = [
        '_center_x',
        '_is_armor',
        '_light_ratio',
        '_center_distance',
        '_angle',
        '_armor_type',
    ]

    _fields_and_field_types = {
        'center_x': 'int32',
        'is_armor': 'boolean',
        'light_ratio': 'float',
        'center_distance': 'float',
        'angle': 'float',
        'armor_type': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.center_x = kwargs.get('center_x', int())
        self.is_armor = kwargs.get('is_armor', bool())
        self.light_ratio = kwargs.get('light_ratio', float())
        self.center_distance = kwargs.get('center_distance', float())
        self.angle = kwargs.get('angle', float())
        self.armor_type = kwargs.get('armor_type', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.center_x != other.center_x:
            return False
        if self.is_armor != other.is_armor:
            return False
        if self.light_ratio != other.light_ratio:
            return False
        if self.center_distance != other.center_distance:
            return False
        if self.angle != other.angle:
            return False
        if self.armor_type != other.armor_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def center_x(self):
        """Message field 'center_x'."""
        return self._center_x

    @center_x.setter
    def center_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'center_x' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'center_x' field must be an integer in [-2147483648, 2147483647]"
        self._center_x = value

    @property
    def is_armor(self):
        """Message field 'is_armor'."""
        return self._is_armor

    @is_armor.setter
    def is_armor(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_armor' field must be of type 'bool'"
        self._is_armor = value

    @property
    def light_ratio(self):
        """Message field 'light_ratio'."""
        return self._light_ratio

    @light_ratio.setter
    def light_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'light_ratio' field must be of type 'float'"
        self._light_ratio = value

    @property
    def center_distance(self):
        """Message field 'center_distance'."""
        return self._center_distance

    @center_distance.setter
    def center_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'center_distance' field must be of type 'float'"
        self._center_distance = value

    @property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle' field must be of type 'float'"
        self._angle = value

    @property
    def armor_type(self):
        """Message field 'armor_type'."""
        return self._armor_type

    @armor_type.setter
    def armor_type(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'armor_type' field must be of type 'bool'"
        self._armor_type = value
