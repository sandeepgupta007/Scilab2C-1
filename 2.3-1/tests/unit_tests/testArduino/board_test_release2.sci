function board_test_release2()
   cmd_dcmotor_setup(1,3,1,9,10)
   cmd_dcmotor_run(1,1,255)
   sleep(3000)
   cmd_dcmotor_release(1,1)
   sleep(3000)
   cmd_dcmotor_run(1,1,-255)
   sleep(3000)
   cmd_dcmotor_release(1,1)
   sleep(3000)
endfunction
