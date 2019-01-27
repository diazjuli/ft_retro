/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameObject.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdiaz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/26 15:23:50 by jdiaz             #+#    #+#             */
/*   Updated: 2019/01/26 15:24:25 by jdiaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAMEOBJECT_HPP
# define GAMEOBJECT_HPP

#include <time.h>
#include "Display.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "Shoot.hpp"
#include <ncurses.h>

class GameObject {

private:

    Player  _player;
    Enemy   *_enemies;
    Shoot   *_shooters;
    int     **_board;
    int     _score;

public:

    //constructors
    GameObject(void);
    GameObject(GameObject const & src);
    ~GameObject(void);

    void createEnemy(int y, int x);
    void createShooter(int y, int x);
    void getInput(int key);
    void update(void);
    void draw(void) const;
};

#endif
