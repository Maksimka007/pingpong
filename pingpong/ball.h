#ifndef BALL_H
#define BALL_H

class Ball
{
public:
	Ball( double radius, ///< Радиус шарика.
				double x,      ///< Горизонтальная координата шарика.
				double y,      ///< Вертикальная координата шарика.
				double speedX, ///< Горизонтальная составляющая скорости.
				double speedY  ///< Вертикальная составляющая скорости.
				);

	Ball( double radius, ///< Радиус шарика.
				double x,      ///< Горизонтальная координата шарика.
				double y       ///< Вертикальная координата шарика.
				);

	/** Радиус шарика.*/
	double radius() const;

	/** Горизонтальная координата шарика.*/
	double x() const;
	/** Установить горизонтальную координату шарика.*/
	void setX(double x);

	/** Вертикальная координата шарика.*/
	double y() const;
	/** Установить вертикальную координату шарика.*/
	void setY(double y);

	/** Горизонтальная составляющая скорости.*/
	double speedX() const;
	/** Установить горизонтальную составляющую скорости.*/
	void setSpeedX(double speedX);

	/** Вертикальная составляющая скорости.*/
	double speedY() const;
	/** Установить вертикальную составляющую скорости.*/
	void setSpeedY(double speedY);
private:
	/** Радиус шарика.*/
	double m_radius;

	/** Горизонтальная координата шарика.*/
	double m_x;
	/** Вертикальная координата шарика.*/
	double m_y;

	/** Горизонтальная составляющая скорости.*/
	double m_speedX;
	/** Вертикальная составляющая скорости.*/
	double m_speedY;

};

#endif // BALL_H
